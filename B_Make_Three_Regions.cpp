#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char arr[2][n];
        for(int i = 0; i<2; i++){
            for(int j = 0 ;j<n; j++){
                cin >> arr[i][j];
            }
        }

        int ans = 0;
        for(int i = 0; i<2; i++){
            for(int j = 0; j<n; j++){
                if(j+2 < n && i+1 < 2 && arr[i][j] == 'x' && arr[i][j+2] == 'x' && arr[i][j+1] == '.' && arr[i+1][j] == '.' && arr[i+1][j+1] == '.' && arr[i+1][j+2] == '.'){
                    ans++;
                }

                if(j+2 < n && i-1 >= 0 && arr[i][j] == 'x' && arr[i][j+2] == 'x' && arr[i][j+1] == '.' && arr[i-1][j] == '.' && arr[i-1][j+1] == '.' && arr[i-1][j+2] == '.'){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}