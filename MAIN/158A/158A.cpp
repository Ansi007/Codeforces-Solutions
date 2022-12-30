#include<iostream>
using namespace std;

int solve() {
    int n, k, kE;
    cin >> n >> k;
    int *score = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if((i + 1) == k) {
            kE = score[i];
        }
    }
    k = 0;
    for (int i = 0; i < n; i++)
    {
        if(score[i] >= kE && score[i] > 0) {
            k++;
        }
    }
    return k;
}

int main() {

    cout << solve();
    return 0;
}