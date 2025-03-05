#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int max_bananas = 0;
        
        // Try all possible distributions of increments (x, y, z) where x + y + z <= 5
        for (int x = 0; x <= 5; ++x) {
            for (int y = 0; y <= 5; ++y) {
                for (int z = 0; z <= 5; ++z) {
                    if (x + y + z <= 5) {
                        int bananas = (a + x) * (b + y) * (c + z);
                        max_bananas = max(max_bananas, bananas);
                    }
                }
            }
        }
        
        cout << max_bananas << endl;
    }
    
    return 0;
}
