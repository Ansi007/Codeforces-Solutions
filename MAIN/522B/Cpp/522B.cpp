#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> widths(n);
    vector<int> heights(n);


    int acc_width = 0, max_height = 0, max_2_height = 0;

    cin >> widths[0];
    acc_width += widths[0];

    cin >> heights[0];
    max_height = heights[0];

    for (int i = 1; i < n; i++) {
        cin >> widths[i];
        acc_width += widths[i];
        cin >> heights[i];

        if (heights[i] > max_height) {
            max_2_height = max_height;
            max_height = heights[i];
        }
        else if (heights[i] > max_2_height) {
            max_2_height = heights[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (heights[i] == max_height) cout << (acc_width - widths[i])*max_2_height << " ";
        else cout << (acc_width - widths[i])*max_height << " "; 
    }
    return 0;
}