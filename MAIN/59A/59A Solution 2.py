# Link of problem
# https://codeforces.com/problemset/problem/59/A

def myfunction(inputword):
    lengthofword = len(inputword)

    countofCapital=0
    countofSmall=0

    for i in range(lengthofword):
        if (inputword[i].isupper()):
            countofCapital=countofCapital+1
        else:
            countofSmall=countofSmall+1
    
    # check if function counted correctly
    # print('Length of word: ', lengthofword)
    # print('Length of capitals: ', countofCapital)
    # print('Length of small letters: ', countofSmall)

        
    if (countofCapital>countofSmall):
        # for i in range(lengthofword):
        inputword=inputword.upper()
    else:
        inputword=inputword.lower()

    print(inputword)
    #print('Output: ',inputword)


inputword = input()
myfunction(inputword)