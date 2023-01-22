#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    bool binarySearch(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums1.size(); i++) {
            if(binarySearch(nums2, nums1[i])) return nums1[i];
        }
        return -1;
    }
};                    
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}