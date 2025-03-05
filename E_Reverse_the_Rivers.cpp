#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>> matrix(n,vector<int>(m, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i == 0){
                continue;
            }
            else{
                matrix[i][j] = (matrix[i][j] | matrix[i-1][j]);
            }
        }
    }

    while(q--){
        int num;
        cin >> num;
        vector<int> cols;
        vector<char> chs;
        vector<int> vals;
        bool koinhimila = true;
        for(int i = 0; i<num; i++){
            int col;
            char ch;
            int val;
            cin >> col >> ch >> val;
            cols.push_back(col);
            chs.push_back(ch);
            vals.push_back(val);
        }

        for(int i = 0; i<n ; i++){
            bool milgya = false;
            for(int j = 0; j<cols.size(); j++){
                int column = cols[j] - 1;
                int value = vals[j];
                char sign = chs[j];

                if(sign == '>'){
                    if(matrix[i][column] > value){
                        milgya = true;
                    }
                    else{
                        milgya = false;
                        break;
                    }
                }
                else if(sign == '<'){
                    if(matrix[i][column] < value){
                        milgya = true;
                    }
                    else{
                        milgya = false;
                        break;
                    }
                }
            }

            if(milgya == true){
                cout << i + 1 << endl;
                koinhimila = false;
                break;    
            }
        }

        if(koinhimila == true){
            cout << -1 << endl;
        }
    }
    return;
}
int main(){
    solve();
    return 0;

}
