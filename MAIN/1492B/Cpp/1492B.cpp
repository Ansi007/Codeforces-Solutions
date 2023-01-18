#include <bits/stdc++.h>
using namespace std;

void createNewDeck(vector<int> v) {
    queue<int> s;
    vector<pair<int, int>> for_max(v.size());
    
    for (int i = 0; i < v.size(); i++) {
        for_max[i].first = v[i];
        for_max[i].second = i;
    }

    sort(for_max.begin(), for_max.end(), greater<>());
    int indx = 0;
    while (!v.empty()) {
        int x = 0;
        int max_index = for_max[indx].second;
        for(int start = max_index; start < v.size(); start++) {
            s.push(v[start]);
            x++;
        }

        for (int i = 0; i < x; i++) {
            v.pop_back();
        }
        indx++;
    }

    while(!s.empty()) {
        cout << s.front() << " ";
        s.pop();
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v;

    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    createNewDeck(v);
}

int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        solve();
    }
}