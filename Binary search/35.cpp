#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res;
        res = lower_bound(nums.begin(),nums.end(),target);
        return res;
    }
};


int main()
{
    //write your code here
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    Solution s;
    cout<<s.searchInsert(nums,target);



    return 0;
}
