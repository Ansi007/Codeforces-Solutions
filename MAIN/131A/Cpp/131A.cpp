#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool allUpper(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i]))
            return false;
    }
    return true;
}

bool firstLowerThenAllUpper(string& s) {
    if (islower(s[0])) {
        for (int  i = 1; i < s.size(); i++) {
            if (islower(s[i]))
                return false;
        }
        return true;
    }
    return false;
}

bool wasCapsLockOn(string& s) {
    return allUpper(s) || firstLowerThenAllUpper(s);
}

void changeCase(string& s) {
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
        else if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
}

int main() {
    string s;
    getline(cin, s);

    if (wasCapsLockOn(s)) {
        changeCase(s);
        cout << s << endl;
    }
    else {
        cout << s << endl;
    }
}