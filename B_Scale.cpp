#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int n, int k, vector<string>& grid) {
    vector<string> newgrid(n / k, string(n / k, ' '));
    
    for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            char Value = grid[i][j];
            int newRow = i / k;
            int newCol = j / k;
            newgrid[newRow][newCol] = Value;
        }
    }
    
    for (auto i : newgrid) {
        cout << i << endl;
    }
}

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> grid(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        
        solve(n, k, grid);
    }
    
    return 0;
}
