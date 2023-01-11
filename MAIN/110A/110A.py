def is_lucky(num):
    s = str(num)
    count = 0
    for i in s:
        if i == "7" or i == "4":
            count += 1
    return count
def main():
    n = int(input())
    f = is_lucky(n)
    if f == 7 or f == 4:
        print("YES")
    else:
        print("NO")
main()
