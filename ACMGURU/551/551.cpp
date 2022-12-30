#include<iostream>
#include<climits>
using namespace std;

int maxF(int a, int b) {
    return a >= b ? a : b;
}

void solve() {
    int n, t1, t2;
    cin >> n >> t1 >> t2;
    int i = 0, m = 0, f = 0, T1 = t1, T2 = t2, max = 0;
    max = maxF(t1,t2);
    
    while(true) {
        if(i >= t1) {
            m += 1;
            f = i;
        }
        if(i >= t2) {
            m += 1;
            f = i;
        }
        if(i >= t1) {
            if(m < n) {
                t1 += T1;
                max = maxF(max,t1); 
            }
            else t1 = INT_MAX;
        }
        if(i >= t2) {
            if(m < n) {
                t2 += T2;
                max = maxF(max,t2);
            }
            else t2 = INT_MAX;
        }
        if(m >= n && i >= max) break;
        i++;
    }
    cout << m << " " << f;
}


int main() {
    solve();
    return 0;
}