#include <bits/stdc++.h>
using namespace std;

int calculateBadDays(vector<int>& v);

int main() {
    int t;
    cin >> t;

    vector<int> results;
    
    while (t--) {
        int n_days;
        cin >> n_days;

        vector<int> v(n_days);
        for (int i = 0; i < n_days; i++) {
            cin >> v[i];
        }

        results.push_back(calculateBadDays(v));
    }

    for (int r:results) {
        cout << r << endl;
    }
}

int calculateBadDays(vector<int>& v) {
    int bad_day_count = 0;
    int min_num = INT_MAX;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] > min_num) bad_day_count++;
        min_num = min(min_num, v[i]);
    }
    return bad_day_count;
}