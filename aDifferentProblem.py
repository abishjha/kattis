import sys

for inp in sys.stdin:
    inp = inp.split()
    result = int(inp[0]) - int(inp[1])
    print(abs(result))