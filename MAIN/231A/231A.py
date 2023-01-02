n = int(input())
count = 0
for i in range(n):
    x = list(map(int, input().split()))
    sum = 0
    for i in range(3):
        sum += x[i]
    if sum >= 2:
        count += 1
print(count)
