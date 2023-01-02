def is_dangerous(s):
    if len(s)< 7:
        return False
    elif len(s) == 7:
        if "1" not in s:
                return True
        if "0" not in s:
            return True
    else:
        for i in range(len(s)-6):
            a = s[i:i+7]
            if "1" not in a:
                return True
            if "0" not in a:
                return True
    return False
def main():
    s = input()
    if is_dangerous(s):
        print("YES")
    else:
        print("NO")
main()