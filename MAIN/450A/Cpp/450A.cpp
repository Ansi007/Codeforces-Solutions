#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count_present = n;

    int i = 0;
    int last_student = 0;
    while (count_present > 0) {
        if (v[i] > 0) {
            v[i] -= m;
            if (v[i] <= 0) {
                count_present--;
                last_student = i;
            }
        }
        
        i = (i + 1) % n;
    }

    cout << last_student + 1 << endl;
}