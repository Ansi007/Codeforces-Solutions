c = 0
for i in range(5):
    a = input().split()
    c +=1
    if "1" in a:
        break
ans = abs(3-c)+ abs(2-a.index("1"))
print(ans)