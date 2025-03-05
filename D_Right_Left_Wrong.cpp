#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxScore(int n, const vector<int>& a, const string& s) {
    int score = 0;
    vector<bool> used(n, false); // Track which cells have been used
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L' && !used[i]) {
            int j = i + 1;
            int segment_sum = a[i];
            while (j < n && s[j] != 'R') {
                segment_sum += a[j];
                ++j;
            }
            if (j < n && s[j] == 'R') {
                segment_sum += a[j];
                score += segment_sum;
                for (int k = i; k <= j; ++k) {
                    used[k] = true;
                }
            }
        }
    }
    return score;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        cout << maxScore(n, a, s) << endl;
    }
    return 0;
}
