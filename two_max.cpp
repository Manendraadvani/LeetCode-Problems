#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    void dfs(int node, vector<int> adj[], vector<int> &vis){
        vis[node] = 1;

        for(auto adjnode: adj[node]){
            dfs(adjnode,adj, vis);
        }
        return;
    }
    vector<vector<int>> twoMax(int n, int m, int rootServer, vector<vector<int>>& edges, vector<int>& requests) {
        vector<int> adj[n+1];

        for(int i = 0;i<edges.size() ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }

        vector<vector<int>> ans;
        for(int i = 0;i<requests.size(); i++){
            vector<int> vis(n+1,0);
            priority_queue<int> pq;
            dfs(requests[i], adj, vis);

            for(int i = 1; i<=n; i++){
                if(vis[i] == 0){
                    pq.push(i);
                }
            }

            vector<int> temp;
            if(pq.size() >= 2){

                temp.push_back(pq.top());
                pq.pop();
                temp.push_back(pq.top());
                pq.pop();
            }
            else if(pq.size() == 1){
                temp.push_back(pq.top());
                pq.pop();
                temp.push_back(-1);
            }
            else{
                temp.push_back(-1);
                temp.push_back(-1);
                
            }

            ans.push_back(temp);
        } 
        return ans;
    }
};

int main() {
    Solution sol;
    int n = 4, m = 2, rootServer = 1;
    vector<vector<int>> edges = {{1, 2}, {1, 3}, {2, 4}};
    vector<int> requests = {1, 2};

    vector<vector<int>> result = sol.twoMax(n, m, rootServer, edges, requests);
    for (const auto& res : result) {
        cout << res[0] << " " << res[1] << endl;
    }

    return 0;
}