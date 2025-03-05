#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> st;
    st.insert(arr[0]);

   
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        bool valid = (st.count(curr - 1) || st.count(curr + 1));
        if (!valid) {
            cout << "NO" << endl;
            return;
        }
        st.insert(curr);
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
