#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
    bool pairsum(vector<int>& nums, int k){
        int cursum=0;
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            if(nums[low]+nums[high]==k){
                return true;
            }
            else if(nums[low]+nums[high]>k){
                high--;
            }else{
                low++;
            }
        }
        return false;
    }
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        int low=0;
        int high=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(low<high){
            if(nums[low]+nums[high]==k){
                ans++;
                low++;
                high--;
            }
            else if(nums[low]+nums[high]>k){
                high--;
            }else{
                low++;
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