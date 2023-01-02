a = input()
s = set()
for i in a:
    s.add(i)
if len(s) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
