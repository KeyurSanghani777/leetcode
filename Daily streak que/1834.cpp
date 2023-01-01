#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int> result;
        vector<pair<int,int>> v;
        for(int i=0;i<tasks.size();i++)
            v.push_back({tasks[i][0],tasks[i][1]});
        sort(v.begin(),v.end());

    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}