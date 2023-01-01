#include<bits/stdc++.h>
using namespace std;
      class Solution {

    int binary_search(vector<int>& nums, int target,int sp,int ep){
        int s=sp;
        int e=ep;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }else if(target>nums[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        if(nums[s]==target){
            return s;
        }
        else{
            return -1;
        }

    }

    int find_min(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        
       while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>nums[mid+1]){
                return mid+1;
            }else if(nums[mid]<nums[mid-1]){
                return mid;
            }else if(nums[mid]>nums[0]){
                s=mid+1;
            }else{
                e=mid-1;
            }
       }
    }








public:
    int search(vector<int>& nums, int target) {
        auto it = std:: minmax_element(nums.begin(),nums.end());
        int  mi=std::distance(nums.begin(),it.first);

        int result_index=-1;
        if (target==nums[mi]){
            return mi;
        }
        else if(target>nums[mi]){
        //  binary_search(nums,target,mi+1,nums.size()-1);
        result_index=binary_search(nums,target,mi+1,nums.size()-1);
        }
        else{
            // return binary_search(nums,target,0,mi-1);
            result_index=binary_search(nums,target,0,mi-1);
        }
        if(result_index==-1){
            return -1;
        }
        else{
            return result_index;
        }
    }
};               
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}