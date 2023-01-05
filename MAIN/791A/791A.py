list = list(map(int, input().split()))
a = list[0]
b = list[1]
count = 0
while True:
    a = a * 3
    b = b * 2
    count += 1
    if a > b:
        break

print(count)
