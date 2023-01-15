#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_test_case;
    cin >> num_test_case;

    vector<int> results;

    for (int test_case = 0; test_case < num_test_case; test_case++) {
        int n, c;
        cin >> n >> c;

        vector<int> orbit(101);
        int max_number = 0;

        for (int i = 0; i < n; i++) {
            int planet_orbit;
            cin >> planet_orbit;

            orbit[planet_orbit] += 1;

            if (planet_orbit > max_number) {
                max_number = planet_orbit;
            }
        }

        int total_cost = 0;
        for (int i = 0; i <= max_number; i++) {
            if (orbit[i] >= c) {
                total_cost += c;
            }
            else {
                total_cost += orbit[i];
            }
        }

        results.push_back(total_cost);
    }

    for (int r:results) {
        cout << r << endl;
    }
}