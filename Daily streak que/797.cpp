#include<bits/stdc++.h>
using namespace std;
class Solution {



    void dfs(vector<vector<int>>& graph,vector<vector<int>>& result,vector<int>& path,int node){
            path.push_back(node);
            if(node==graph.size()-1){
                result.push_back(path);
                path.pop_back();
                return ;
            }
            for(int i=0;i<graph[node].size();i++){
                dfs(graph,result,path,graph[node][i]);
            }
            path.pop_back();
            
        }
public:

        




    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        vector<vector<int>>result;
        dfs(graph,result,path,0);
        return result;
    }
};                     
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}