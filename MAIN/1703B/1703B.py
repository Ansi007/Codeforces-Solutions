t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    g = set()
    for i in s:
        g.add(i)
    print(n+len(g))