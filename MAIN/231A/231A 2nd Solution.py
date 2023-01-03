# Link of problem
# https://codeforces.com/problemset/problem/231/A

def myfunction(totalrecords, arrayofinputrecords):
    # print(totalrecords)
    # print(arrayofinputrecords)

    solvableproblemscount = 0

    for i in range(totalrecords):

        countof1s=0

        for j in range(5):
            
            if arrayofinputrecords[i][j]=='1':
                countof1s=countof1s+1


        if countof1s>=2:
            solvableproblemscount=solvableproblemscount+1


    print(solvableproblemscount)

    

# Main Function
totalrecords = int(input())
arrayofinputrecords = []

for i in range(totalrecords):
    inputrecord = input()
    arrayofinputrecords.append(inputrecord)


myfunction(totalrecords, arrayofinputrecords)