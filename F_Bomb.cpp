
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        priority_queue<long long> pq;
        
        for (int i = 0; i < n; i++) {
            pq.push(a[i]);
        }  
        
        long long score = 0;
        
        while (k-- > 0 && !pq.empty()) {
            long long maxVal = pq.top();
            pq.pop();
            score += maxVal;
            
            for (int i = 0; i < n; i++) {
                if (a[i] == maxVal) {
                    a[i] = max(0, a[i] - b[i]);
                    pq.push(a[i]);
                    break;
                }
            }
        }
        
        cout << score << endl;
    }
    
    return 0;
}
