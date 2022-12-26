#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int weakest;
        // vector of key and value pair of int and int
       vector<int> v;


        for (int i = 0; i < mat.size(); i++)
        {
            /* code */
            int sol,civil;

            for (int j = 0; j < mat[i].size(); j++)
            {
                if(mat[i][j]==1){
                    sol++;
                }else{
                    break;
                }
            }
            v.push_back(sol*1000+i);

        }
      
        sort(v.begin(),v.end());
        vector<int> ans;

        for (int i = 0; i < k; i++)
        {
            /* code */
            ans.push_back(v[i]%1000);
        }
        return ans;







    }
};



int main()
{
    //write your code here
    Solution s;
    vector<vector<int>> mat = {{1,1,0,0,0},
                                {1,1,1,1,0},
                                {1,0,0,0,0},
                                {1,1,0,0,0},
                                {1,1,1,1,1}};
    int k=3;
    vector<int> ans;
    ans=s.kWeakestRows(mat,k);
    // cout<<ans;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
