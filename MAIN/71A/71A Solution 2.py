# Link of problem
# https://codeforces.com/problemset/problem/71/A

def myfunction(inputnumber, arrayofinputwords):
    # print(inputnumber)
    # print(arrayofinputwords)

    for i in range(inputnumber):
        # check if length is less than 10 char
        # print as it is
        if len(arrayofinputwords[i])<=10:
            print(arrayofinputwords[i])

        else:
            # print('Long word actual:')
            # print(arrayofinputwords[i])

            # find length of word
            lenword = len(arrayofinputwords[i])
            lenprint = lenword-2

            # print('length of long word: ', lenword)

            firstchar = arrayofinputwords[i][0]
            # print('first char trimmed: ', firstchar)

            lastchar = arrayofinputwords[i][lenword-1]
            # print('last char trimmed: ', lastchar)

            lenprint = str(lenprint)
            print(firstchar+lenprint+lastchar)
    
# Main Function
inputnumber = int(input())
arrayofinputwords = []

for i in range(inputnumber):
    inputword = input()
    arrayofinputwords.append(inputword)


myfunction(inputnumber, arrayofinputwords)