# Link of problem
# https://codeforces.com/problemset/problem/281/A

def myfunction(inputword):
    # discard if string input is empty
    if (len(inputword)<1):
        print('Short word error')
    
    # else continue function
    else:
        # check input word
        # print(inputword)
        # check first alphabet of string
        # print(inputword[0])

        # take first alphabet of string
        firstalpha = inputword[0]
        # capitalize it
        firstalpha =  firstalpha.upper()

        # take remaining word from it
        trimmedword = inputword[1:]
        # print remaining word
        # print(trimmedword)

        # check if alphabet has been capitalized
        # print(firstalpha)

        # combine capitalized alphabet and remaining word
        final_word = firstalpha+trimmedword

        # print final word
        print(final_word)


inputw = input()
myfunction(inputw)