x = int(input())
if x in range(1, 101):
    if x%2 != 0:
        print("NO")
    else:
        if int(x/2)%2==0:
            print("YES")
        else:
            if int(x/2)-1 != 0:
                print("YES")
            else:
                print("NO")
