#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e= nums.size()-1;
        
        bool flag = false; 
        while(s<e){
            
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                flag = true;
                 return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return s;

       
        // return *lower_bound(nums.begin(),nums.end(),target);
        

    }
};                     
                     
                     
                     
int main()
{
    //write your code here
     vector<int> nums = {1,3,5,6};
    int target = 0;
    Solution s;
    cout<<s.searchInsert(nums,target);
    return 0;
}