def count(st, x):
    count = 0
    if x == "upper":
        for i in st:
            if ord(i) in range(ord("A"), ord("Z")+1):
                count += 1
    if x == "lower":
        for i in st:
            if ord(i) in range(ord("a"), ord("z")+1):
                count += 1
    return count

def main():
    s = input()
    upper_count = count(s, "upper")
    lower_count = count(s, "lower")
    if lower_count >= upper_count:
        s = s.lower()
    else:
        s = s.upper()
    print(s)
main()

