#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        set<vector<int>> ans;
        solve(nums, 0, temp, ans);
        
    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}