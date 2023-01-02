t = int(input())
for i in range(t):
    s = input()
    r = ""
    if len(s)>10:
        r += s[0]
        a = len(s[1:-1])
        r += str(a)
        r += s[-1]
    else:
        r += s
    print(r)
