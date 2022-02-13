# -----------------------------------------------------------------------------
#
#   Copyright (c) Charles Carley.
#
#   This software is provided 'as-is', without any express or implied
# warranty. In no event will the authors be held liable for any damages
# arising from the use of this software.
#
#   Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented; you must not
#    claim that you wrote the original software. If you use this software
#    in a product, an acknowledgment in the product documentation would be
#    appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
#    misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.
# ------------------------------------------------------------------------------
import glob, subprocess
import os

style_light = {
    '--font-family':        "Segoe UI",
    '--font-size':          "11",
    '--arrow-size':         "0.5",
    '--text':               "#010509FF",
    '--edge-red':           "#FF1040FF",
    '--edge-green':         "#20FF10FF",
    '--edge-blue':          "#1010FFFF",
    '--edge-grey':          "#7C7CC7FF",
    '--bold':               "#000001FF",
    '--table-border-size':  "0",
    '--table-bg':           "#22222210",
    '--grey-table-0':       "#F4F4F5FF",
    '--grey-table-1':       "#F5F5F5FF",
    '--grey-table-edge':    "#69BFFFFF",
}

style_dark  = {
    '--font-family':        "Segoe UI",
    '--font-size':          "11",
    '--arrow-size':         "0.5",
    '--text':               "#828EA0FF",
    '--edge-red':           "#EA3E53FF",
    '--edge-green':         "#56AA56FF",
    '--edge-blue':          "#6692C2FF",
    '--edge-grey':          "#7C7C7CFF",
    '--bold':               '#AEB6C2FF',
    '--table-border-size':  "0",
    '--table-bg':           "#828EA010",
    '--red-table':          "#FF000010",
    '--grey-table-0':       "#242726FF",
    '--grey-table-text':    "#222222FF",
    '--grey-table-1':       "#464948C0",
    '--grey-table-edge':    "#828EA0FF",
}

swap_style  = style_dark

def fixupStyle(file):
    global swap_style

    fp = open(file, "r")
    buffer = fp.read()
    fp.close()

    for key in swap_style.keys():
        item = swap_style[key]
        buffer = buffer.replace(key, item)

    fp = open(file, "w")
    fp.write(buffer)
    fp.close()



def main():
    images = glob.glob("*.dot")   

    for img in images:

        fixupStyle(img)
        print("generating graph %s"% img)
        subprocess.run("dot -T svg -O %s"% img, shell=True, env=os.environ)

if __name__ == '__main__':
    main()

