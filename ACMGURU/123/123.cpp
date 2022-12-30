#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f0 = 0, f1 = 1, sum = 1, twoSum = 0;
    for(int i = 2; i <= n; i++) {
        twoSum = f0 + f1;
        f0 = f1;
        f1 = twoSum;
        sum += twoSum;
    }
    cout << sum;
    return 0;
}