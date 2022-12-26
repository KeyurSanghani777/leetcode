#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (nums[i]==target)
            {
                /* code */
                ans.push_back(i);
            }
        }
        

        return ans;




    }
};                 
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}