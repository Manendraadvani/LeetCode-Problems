#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int longestDivisibleSubarray(vector<int>& expenses, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int maxLength = 0;
        int sum = 0;

        for (int i = 0; i < expenses.size(); i++) {
            sum += expenses[i];
            int remainder = sum % k;
            if (remainder < 0) remainder += k;

            if (mp.find(remainder) != mp.end()) {
                int len = i - mp[remainder];
                maxLength = max(maxLength, len);
            } else {
                mp[remainder] = i;
            }
        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    int n, k;
    cout << "Enter the number of days (n): ";
    cin >> n;
    cout << "Enter the billing cycle (k): ";
    cin >> k;
    
    vector<int> expenses(n);
    cout << "Enter daily expenses:\n";
    for (int i = 0; i < n; i++) {
        cin >> expenses[i];
    }

    cout << "Output: " << sol.longestDivisibleSubarray(expenses, k) << endl;
    return 0;
}
