"""Small SVG drawing engine for the figures of the CSR generator specification.

Fig  : gate-level schematic with the cells of the VLSIT basic cell library (VLSIT_CELL_*).
Flow : flowchart with terminals, processes, decisions and input/output boxes.
No third-party package is needed. Run make_figures.py to produce every figure.
"""
import html

FONT = "Consolas, 'DejaVu Sans Mono', monospace"
INK = "#1b2733"
WIRE = "#2b3a4a"
CLK = "#1565c0"
RST = "#b23b3b"
GATE_FILL = "#f4f7fb"
FF_FILL = "#e9f5ea"
MUX_FILL = "#fff6e3"
BOX_FILL = "#eef0f6"


def esc(s):
    return html.escape(str(s), quote=True)


# kind: (width, height, input pin names, output pin names, fill, label shown in the symbol)
CELLS = {
    "AND2": (54, 40, ["A", "B"], ["Y"], GATE_FILL, "AND2"),
    "AND3": (54, 52, ["A", "B", "C"], ["Y"], GATE_FILL, "AND3"),
    "AND4": (54, 64, ["A", "B", "C", "D"], ["Y"], GATE_FILL, "AND4"),
    "NAND2": (54, 40, ["A", "B"], ["Y"], GATE_FILL, "NAND2"),
    "NAND4": (54, 64, ["A", "B", "C", "D"], ["Y"], GATE_FILL, "NAND4"),
    "OR2": (54, 40, ["A", "B"], ["Y"], GATE_FILL, "OR2"),
    "OR3": (54, 52, ["A", "B", "C"], ["Y"], GATE_FILL, "OR3"),
    "NOR2": (54, 40, ["A", "B"], ["Y"], GATE_FILL, "NOR2"),
    "XOR2": (54, 40, ["A", "B"], ["Y"], GATE_FILL, "XOR2"),
    "XNOR2": (54, 40, ["A", "B"], ["Y"], GATE_FILL, "XNOR2"),
    "INV": (40, 26, ["A"], ["Y"], GATE_FILL, "INV"),
    "MUX2": (50, 64, ["I0", "I1", "S"], ["Y"], MUX_FILL, "MUX2"),
    "DFF_RN": (74, 66, ["D", "CK", "RN"], ["Q"], FF_FILL, "DFF_RN"),
    "DFF_SN": (74, 66, ["D", "CK", "SN"], ["Q"], FF_FILL, "DFF_SN"),
    "SYNC2": (96, 62, ["D", "CK", "RN"], ["Q"], FF_FILL, "SYNC_2FF_RN"),
    "TIEL": (30, 22, [], ["Y"], GATE_FILL, "TIEL"),
    "TIEH": (30, 22, [], ["Y"], GATE_FILL, "TIEH"),
}


class Fig:
    def __init__(self, name, title, margin_left=210, col_w=150, row_h=62, margin_right=190):
        self.name, self.title = name, title
        self.ml, self.colw, self.rowh, self.mr = margin_left, col_w, row_h, margin_right
        self.nodes = {}
        self.nets = []
        self.texts = []
        self.rects = []
        self.warn = []
        self.max_col = 0
        self.max_row = 0

    # ------------------------------------------------------------------ nodes
    def _xy(self, col, row):
        return self.ml + col * self.colw, 72 + row * self.rowh

    def port_in(self, nid, label, col=0, row=0, style=None):
        x, y = self._xy(col, row)
        self.nodes[nid] = dict(t="pin", x=x, y=y, label=label, style=style, col=col, row=row, w=0, h=0)
        self._ext(col, row)

    def port_out(self, nid, label, col, row, style=None):
        x, y = self._xy(col, row)
        self.nodes[nid] = dict(t="pout", x=x, y=y, label=label, style=style, col=col, row=row, w=0, h=0)
        self._ext(col, row)

    def gate(self, nid, kind, col, row, label=None, ins=None, outs=None, w=None, h=None, fill=None, note=None):
        if kind == "BOX":
            ins = ins or []
            outs = outs or ["Y"]
            hh = h or max(34, 20 * max(len(ins), len(outs)) + 12)
            ww = w or 118
            info = (ww, hh, ins, outs, fill or BOX_FILL, label or nid)
        else:
            info = CELLS[kind]
            if w or h:
                info = (w or info[0], h or info[1]) + info[2:]
            if label:
                info = info[:5] + (label,)
        x, y = self._xy(col, row)
        ww, hh = info[0], info[1]
        self.nodes[nid] = dict(t="cell", kind=kind, x=x, y=y - hh / 2, w=ww, h=hh, ins=info[2], outs=info[3],
                               fill=info[4], label=info[5], note=note, col=col, row=row)
        self._ext(col, row)

    def text(self, x, y, s, size=11, anchor="start", weight="normal", color=INK, italic=False):
        self.texts.append((x, y, s, size, anchor, weight, color, italic))

    def text_at(self, col, row, s, **kw):
        x, y = self._xy(col, row)
        self.text(x, y, s, **kw)

    def frame(self, col0, row0, col1, row1, label, dashed=True):
        x0, y0 = self._xy(col0, row0)
        x1, y1 = self._xy(col1, row1)
        self.rects.append((x0 - 24, y0 - 34, x1 + 80, y1 + 34, label, dashed))

    def _ext(self, col, row):
        self.max_col = max(self.max_col, col)
        self.max_row = max(self.max_row, row)

    # ------------------------------------------------------------------ nets
    def net(self, src, dsts, name=None, style=None):
        if isinstance(dsts, str):
            dsts = [dsts]
        self.nets.append(dict(src=src, dsts=list(dsts), name=name, style=style))

    def _pin(self, ref, want_out):
        nid, _, pin = ref.partition(".")
        n = self.nodes[nid]
        if n["t"] == "pin":
            return n["x"], n["y"]
        if n["t"] == "pout":
            return n["x"], n["y"]
        names = n["outs"] if want_out else n["ins"]
        pin = pin or (names[0] if names else "")
        k, cnt = names.index(pin), len(names)
        y = n["y"] + n["h"] * (k + 1) / (cnt + 1)
        if n["kind"] in ("DFF_RN", "DFF_SN") and not want_out:
            y = n["y"] + n["h"] * (0.2, 0.5, 0.8)[k]
        if n["kind"] == "MUX2" and not want_out:
            y = n["y"] + n["h"] * (0.22, 0.78, 0.5)[k]
        x = n["x"] + (n["w"] if want_out else 0)
        return x, y

    # ------------------------------------------------------------------ render
    def render(self):
        out = []
        tracks = {}
        lanes = 0
        wires = []
        dots = []
        labels = []
        stubs = []
        used_wire = set()
        stub_src = {}
        for net in self.nets:
            if net["style"] in ("clk", "rst"):
                sid = net["src"].partition(".")[0]
                lab = self.nodes[sid]["label"]
                short = lab[2:] if lab.startswith(("i_", "w_")) else lab
                for d in net["dsts"]:
                    dx, dy = self._pin(d, False)
                    stubs.append((dx, dy, short, net["style"]))
                stub_src.setdefault(sid, net["style"])
                continue
            used_wire.add(net["src"].partition(".")[0])
            for d in net["dsts"]:
                used_wire.add(d.partition(".")[0])
        for net in self.nets:
            if net["style"] in ("clk", "rst"):
                continue
            sx, sy = self._pin(net["src"], True)
            sn = self.nodes[net["src"].partition(".")[0]]
            color = CLK if net["style"] == "clk" else (RST if net["style"] == "rst" else WIRE)
            dash = ' stroke-dasharray="5 3"' if net["style"] in ("clk", "rst") else ""
            seg_sinks = []
            for d in net["dsts"]:
                dx, dy = self._pin(d, False)
                dn = self.nodes[d.partition(".")[0]]
                key = dn["col"]
                tracks[key] = tracks.get(key, 0) + 1
                xc = dn["x"] - 14 - 7 * (tracks[key] % 7) if dn["t"] != "pout" else dn["x"] - 14 - 7 * (tracks[key] % 7)
                if dn["col"] > sn["col"]:
                    pts = [(sx, sy), (xc, sy), (xc, dy), (dx, dy)]
                    self._check_h(sx, xc, sy, sn, dn, d)
                else:
                    lanes += 1
                    yl = 22 - 0 + 0
                    yl = 14 + 6 * (lanes % 6)
                    xs = sx + 10 + 6 * (lanes % 5)
                    pts = [(sx, sy), (xs, sy), (xs, yl), (xc, yl), (xc, dy), (dx, dy)]
                wires.append((pts, color, dash))
                seg_sinks.append((xc, sy, pts))
            if len(net["dsts"]) > 1:
                for xc, y, pts in sorted(seg_sinks, key=lambda t: t[0])[:-1]:
                    if len(pts) == 4:
                        dots.append((xc, y, color))
                    else:
                        dots.append((pts[1][0], pts[1][1], color))
            if net.get("name"):
                labels.append((sx + 6, sy - 4, net["name"], color))
        hidden = {sid for sid in stub_src if sid not in used_wire}
        self._hidden = hidden
        width = self.ml + (self.max_col + 1) * self.colw + self.mr
        ymax = 0
        for nid, n in self.nodes.items():
            if nid in hidden:
                continue
            ymax = max(ymax, n["y"] + n["h"] + (12 if n["t"] == "cell" else 14))
        for (x, y, s_, size, anchor, weight, color, italic) in self.texts:
            ymax = max(ymax, y + 6)
        height = int(ymax + 30)
        out.append('<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d" '
                   'font-family="%s" font-size="11">' % (width, height, width, height, esc(FONT)))
        out.append('<title>%s</title><rect width="100%%" height="100%%" fill="#ffffff"/>' % esc(self.title))
        out.append('<text x="8" y="14" font-size="12" font-weight="bold" fill="%s">%s</text>' % (INK, esc(self.title)))
        for (x0, y0, x1, y1, lab, dashed) in self.rects:
            out.append('<rect x="%d" y="%d" width="%d" height="%d" fill="none" stroke="#8a97a6" stroke-width="1" %s rx="6"/>'
                       % (x0, y0, x1 - x0, y1 - y0, 'stroke-dasharray="6 4"' if dashed else ""))
            out.append('<text x="%d" y="%d" font-size="10" fill="#5b6b7b">%s</text>' % (x0 + 6, y0 + 12, esc(lab)))
        for pts, color, dash in wires:
            out.append('<polyline points="%s" fill="none" stroke="%s" stroke-width="1.3"%s/>'
                       % (" ".join("%.1f,%.1f" % p for p in pts), color, dash))
        for x, y, color in dots:
            out.append('<circle cx="%.1f" cy="%.1f" r="2.6" fill="%s"/>' % (x, y, color))
        for nid, n in self.nodes.items():
            if nid in hidden:
                continue
            out.append(self._draw_node(n))
        for x, y, short, style in stubs:
            col = CLK if style == "clk" else RST
            out.append('<line x1="%.1f" y1="%.1f" x2="%.1f" y2="%.1f" stroke="%s" stroke-width="1.3"/>' % (x - 20, y, x, y, col))
            out.append('<text x="%.1f" y="%.1f" font-size="9" text-anchor="end" fill="%s">%s</text>' % (x - 23, y + 3, col, esc(short)))
        for x, y, s, c in labels:
            out.append('<text x="%.1f" y="%.1f" font-size="9" fill="%s" font-style="italic">%s</text>' % (x, y, c, esc(s)))
        for (x, y, s, size, anchor, weight, color, italic) in self.texts:
            out.append('<text x="%.1f" y="%.1f" font-size="%d" text-anchor="%s" font-weight="%s" fill="%s"%s>%s</text>'
                       % (x, y, size, anchor, weight, color, ' font-style="italic"' if italic else "", esc(s)))
        out.append("</svg>")
        return "\n".join(out)

    def _check_h(self, x0, x1, y, sn, dn, ref):
        for nid, n in self.nodes.items():
            if n["t"] != "cell" or n is sn or n is dn:
                continue
            if n["y"] - 2 <= y <= n["y"] + n["h"] + 2 and n["x"] < x1 and n["x"] + n["w"] > x0:
                self.warn.append("%s: wire to %s crosses gate %s" % (self.name, ref, nid))

    def _draw_node(self, n):
        t = n["t"]
        if t == "pin":
            col = CLK if n["style"] == "clk" else (RST if n["style"] == "rst" else INK)
            return ('<text x="%.1f" y="%.1f" text-anchor="end" fill="%s">%s</text>'
                    '<polygon points="%.1f,%.1f %.1f,%.1f %.1f,%.1f" fill="%s"/>'
                    % (n["x"] - 10, n["y"] + 4, col, esc(n["label"]), n["x"] - 7, n["y"] - 3.5, n["x"] - 7, n["y"] + 3.5,
                       n["x"], n["y"], col))
        if t == "pout":
            return ('<polygon points="%.1f,%.1f %.1f,%.1f %.1f,%.1f" fill="%s"/>'
                    '<text x="%.1f" y="%.1f" fill="%s">%s</text>'
                    % (n["x"] - 7, n["y"] - 3.5, n["x"] - 7, n["y"] + 3.5, n["x"], n["y"], INK, n["x"] + 6, n["y"] + 4, INK, esc(n["label"])))
        kind, x, y, w, h = n["kind"], n["x"], n["y"], n["w"], n["h"]
        g = ['<g>']
        fill = n["fill"]
        sw = 'stroke="%s" stroke-width="1.5" fill="%s"' % (INK, fill)
        bub = lambda cx, cy: '<circle cx="%.1f" cy="%.1f" r="3.6" fill="#ffffff" stroke="%s" stroke-width="1.3"/>' % (cx, cy, INK)
        if kind in ("AND2", "AND3", "AND4", "NAND2", "NAND4"):
            r = h / 2
            g.append('<path d="M%.1f,%.1f L%.1f,%.1f A%.1f,%.1f 0 0 1 %.1f,%.1f L%.1f,%.1f Z" %s/>'
                     % (x, y, x + w - r - (7 if kind.startswith("N") else 0), y, r, r, x + w - r - (7 if kind.startswith("N") else 0), y + h, x, y + h, sw))
            if kind.startswith("N"):
                g.append(bub(x + w - 4, y + h / 2))
        elif kind in ("OR2", "OR3", "NOR2", "XOR2", "XNOR2"):
            ww = w - (7 if kind in ("NOR2", "XNOR2") else 0)
            g.append('<path d="M%.1f,%.1f Q%.1f,%.1f %.1f,%.1f Q%.1f,%.1f %.1f,%.1f Q%.1f,%.1f %.1f,%.1f Z" %s/>'
                     % (x, y, x + ww * 0.62, y, x + ww, y + h / 2, x + ww * 0.62, y + h, x, y + h, x + ww * 0.28, y + h / 2, x, y, sw))
            if kind in ("XOR2", "XNOR2"):
                g.append('<path d="M%.1f,%.1f Q%.1f,%.1f %.1f,%.1f" fill="none" stroke="%s" stroke-width="1.5"/>'
                         % (x - 6, y, x + ww * 0.22, y + h / 2, x - 6, y + h, INK))
            if kind in ("NOR2", "XNOR2"):
                g.append(bub(x + w - 4, y + h / 2))
        elif kind == "INV":
            g.append('<polygon points="%.1f,%.1f %.1f,%.1f %.1f,%.1f" %s/>' % (x, y, x + w - 8, y + h / 2, x, y + h, sw))
            g.append(bub(x + w - 4, y + h / 2))
        elif kind == "MUX2":
            g.append('<polygon points="%.1f,%.1f %.1f,%.1f %.1f,%.1f %.1f,%.1f" %s/>'
                     % (x, y, x + w, y + h * 0.18, x + w, y + h * 0.82, x, y + h, sw))
        elif kind in ("TIEL", "TIEH"):
            g.append('<rect x="%.1f" y="%.1f" width="%d" height="%d" rx="3" %s/>' % (x, y, w, h, sw))
        else:
            g.append('<rect x="%.1f" y="%.1f" width="%d" height="%d" rx="4" %s/>' % (x, y, w, h, sw))
        # pin labels and cell names
        if kind in ("MUX2", "DFF_RN", "DFF_SN", "SYNC2"):
            for k, p in enumerate(n["ins"]):
                if kind == "BOX":
                    py = y + h * (k + 1) / (len(n["ins"]) + 1)
                elif kind == "MUX2":
                    py = y + h * (0.22, 0.78, 0.5)[k]
                else:
                    py = y + h * (0.2, 0.5, 0.8)[k]
                lab = {"I0": "0", "I1": "1"}.get(p, p)
                g.append('<text x="%.1f" y="%.1f" font-size="9" fill="%s">%s</text>' % (x + 3, py + 3, INK, esc(lab)))
                if p == "CK":
                    g.append('<polyline points="%.1f,%.1f %.1f,%.1f %.1f,%.1f" fill="none" stroke="%s" stroke-width="1"/>'
                             % (x, py - 5, x + 7, py, x, py + 5, INK))
                if p in ("RN", "SN"):
                    g.append(bub(x - 0.5, py))
            for k, p in enumerate(n["outs"]):
                if kind in ("MUX2", "DFF_RN", "DFF_SN", "SYNC2") and len(n["outs"]) == 1:
                    py = y + h * (0.2 if kind.startswith(("DFF", "SYNC")) else 0.5)
                else:
                    py = y + h * (k + 1) / (len(n["outs"]) + 1)
                g.append('<text x="%.1f" y="%.1f" font-size="9" text-anchor="end" fill="%s">%s</text>' % (x + w - 3, py + 3, INK, esc(p)))
        if kind == "BOX":
            lines = str(n["label"]).split("\n")
            for i, ln in enumerate(lines):
                g.append('<text x="%.1f" y="%.1f" font-size="10" text-anchor="middle" font-weight="bold" fill="%s">%s</text>'
                         % (x + w / 2, y + h / 2 + 4 + (i - (len(lines) - 1) / 2) * 12, INK, esc(ln)))
        else:
            ty = y + h / 2 + 4
            if kind in ("MUX2", "DFF_RN", "DFF_SN", "SYNC2"):
                ty = y + h / 2 + (4 if kind == "MUX2" else 8)
            if kind in ("INV",):
                ty = y + h + 11
            g.append('<text x="%.1f" y="%.1f" font-size="9" text-anchor="middle" fill="#46566a">%s</text>'
                     % (x + w / 2 - (3 if kind == "MUX2" else 0), ty, esc(n["label"])))
        if n.get("note"):
            g.append('<text x="%.1f" y="%.1f" font-size="9" text-anchor="middle" fill="#5b6b7b" font-style="italic">%s</text>'
                     % (x + w / 2, y - 4, esc(n["note"])))
        g.append("</g>")
        return "".join(g)

    def save(self, path):
        svg = self.render()
        with open(path, "w", encoding="utf-8", newline="\n") as f:
            f.write(svg)
        return self.warn


# ======================================================================= flowchart
class Flow:
    def __init__(self, name, title, col_w=270, row_h=84, margin=40):
        self.name, self.title = name, title
        self.cw, self.rh, self.m = col_w, row_h, margin
        self.nodes = {}
        self.edges = []
        self.max_col = 0
        self.max_row = 0

    def node(self, nid, kind, label, col, row, w=210, h=None):
        if h is None:
            h = {"term": 40, "proc": 46, "dec": 76, "io": 46, "sub": 46}[kind]
            nl = str(label).count("\n")
            h = max(h, 22 + 14 * (nl + 1))
        cx = self.m + 40 + col * self.cw + 150
        cy = 56 + row * self.rh
        self.nodes[nid] = dict(kind=kind, label=str(label), cx=cx, cy=cy, w=w, h=h)
        self.max_col, self.max_row = max(self.max_col, col), max(self.max_row, row)

    def edge(self, a, b, label=None, route="auto", via=None):
        self.edges.append((a, b, label, route, via))

    def render(self):
        W = self.m * 2 + 80 + (self.max_col + 1) * self.cw + 40
        H = 56 + (self.max_row + 1) * self.rh + 50
        o = ['<svg xmlns="http://www.w3.org/2000/svg" width="%d" height="%d" viewBox="0 0 %d %d" font-family="%s" font-size="11">'
             % (W, H, W, H, esc(FONT)),
             '<title>%s</title><rect width="100%%" height="100%%" fill="#ffffff"/>' % esc(self.title),
             '<defs><marker id="ar" markerWidth="8" markerHeight="8" refX="7" refY="4" orient="auto"><path d="M0,0 L8,4 L0,8 Z" fill="%s"/></marker></defs>' % WIRE,
             '<text x="8" y="16" font-size="12" font-weight="bold" fill="%s">%s</text>' % (INK, esc(self.title))]
        for a, b, label, route, via in self.edges:
            A, B = self.nodes[a], self.nodes[b]
            pts, lp = self._route(A, B, route, via)
            o.append('<polyline points="%s" fill="none" stroke="%s" stroke-width="1.4" marker-end="url(#ar)"/>'
                     % (" ".join("%.1f,%.1f" % p for p in pts), WIRE))
            if label:
                o.append('<text x="%.1f" y="%.1f" font-size="10" fill="#b23b3b" font-weight="bold">%s</text>' % (lp[0], lp[1], esc(label)))
        for nid, n in self.nodes.items():
            o.append(self._draw(n))
        o.append("</svg>")
        return "\n".join(o)

    def _route(self, A, B, route, via):
        ax, ay, aw, ah = A["cx"], A["cy"], A["w"], A["h"]
        bx, by, bw, bh = B["cx"], B["cy"], B["w"], B["h"]
        if via:
            pts = [(ax, ay + ah / 2 if route == "down" else ay)] if False else None
        if route == "auto":
            route = "down" if abs(ax - bx) < 1 and by > ay else ("right" if bx > ax and by >= ay else "left" if bx < ax else "down")
        if route == "down":
            pts = [(ax, ay + ah / 2), (bx, by - bh / 2)]
            return pts, (ax + 6, ay + ah / 2 + 14)
        if route == "right":       # leave on the right side, go down to the top of B
            pts = [(ax + aw / 2, ay), (bx, ay), (bx, by - bh / 2)]
            return pts, (ax + aw / 2 + 8, ay - 8)
        if route == "left":
            pts = [(ax - aw / 2, ay), (bx, ay), (bx, by - bh / 2)]
            return pts, (ax - aw / 2 - 30, ay - 5)
        if route == "rightside":   # leave on the right side, enter B on its right side (loop back)
            xm = max(ax + aw / 2, bx + bw / 2) + 26
            pts = [(ax + aw / 2, ay), (xm, ay), (xm, by), (bx + bw / 2, by)]
            return pts, (ax + aw / 2 + 6, ay - 5)
        if route == "leftside":
            xm = min(ax - aw / 2, bx - bw / 2) - 26
            pts = [(ax - aw / 2, ay), (xm, ay), (xm, by), (bx - bw / 2, by)]
            return pts, (ax - aw / 2 - 30, ay - 5)
        if route == "hright":      # straight to the right to the left side of B (same row)
            pts = [(ax + aw / 2, ay), (bx - bw / 2, by)]
            return pts, (ax + aw / 2 + 10, ay - 9)
        if route == "hleft":
            pts = [(ax - aw / 2, ay), (bx + bw / 2, by)]
            return pts, (ax - aw / 2 - 30, ay - 5)
        if route == "bottomside":  # from the bottom of A, go sideways then up/down into the side of B
            pts = [(ax, ay + ah / 2), (ax, by), (bx - bw / 2 if bx > ax else bx + bw / 2, by)]
            return pts, (ax + 6, ay + ah / 2 + 14)
        raise ValueError(route)

    def _draw(self, n):
        k, cx, cy, w, h = n["kind"], n["cx"], n["cy"], n["w"], n["h"]
        x, y = cx - w / 2, cy - h / 2
        st = 'stroke="%s" stroke-width="1.5"' % INK
        if k == "term":
            shp = '<rect x="%.1f" y="%.1f" width="%d" height="%d" rx="%d" fill="#e6efe7" %s/>' % (x, y, w, h, h // 2, st)
        elif k == "proc":
            shp = '<rect x="%.1f" y="%.1f" width="%d" height="%d" rx="4" fill="#f4f7fb" %s/>' % (x, y, w, h, st)
        elif k == "sub":
            shp = ('<rect x="%.1f" y="%.1f" width="%d" height="%d" rx="4" fill="#eef0f6" %s/>'
                   '<line x1="%.1f" y1="%.1f" x2="%.1f" y2="%.1f" stroke="%s" stroke-width="1.2"/>'
                   '<line x1="%.1f" y1="%.1f" x2="%.1f" y2="%.1f" stroke="%s" stroke-width="1.2"/>'
                   % (x, y, w, h, st, x + 9, y, x + 9, y + h, INK, x + w - 9, y, x + w - 9, y + h, INK))
        elif k == "dec":
            shp = '<polygon points="%.1f,%.1f %.1f,%.1f %.1f,%.1f %.1f,%.1f" fill="#fff6e3" %s/>' % (cx, y, x + w, cy, cx, y + h, x, cy, st)
        else:  # io
            shp = '<polygon points="%.1f,%.1f %.1f,%.1f %.1f,%.1f %.1f,%.1f" fill="#eaf1fb" %s/>' % (x + 14, y, x + w, y, x + w - 14, y + h, x, y + h, st)
        lines = n["label"].split("\n")
        txt = "".join('<text x="%.1f" y="%.1f" text-anchor="middle" fill="%s">%s</text>'
                      % (cx, cy + 4 + (i - (len(lines) - 1) / 2) * 14, INK, esc(ln)) for i, ln in enumerate(lines))
        return "<g>" + shp + txt + "</g>"

    def save(self, path):
        with open(path, "w", encoding="utf-8", newline="\n") as f:
            f.write(self.render())
