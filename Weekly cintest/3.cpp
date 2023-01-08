// 6289. Find Xor-Beauty of Array
// User Accepted:5743
// User Tried:6833
// Total Accepted:5867
// Total Submissions:9322
// Difficulty:Medium
// You are given a 0-indexed integer array nums.

// The effective value of three indices i, j, and k is defined as ((nums[i] | nums[j]) & nums[k]).

// The xor-beauty of the array is the XORing of the effective values of all the possible triplets of indices (i, j, k) where 0 <= i, j, k < n.

// Return the xor-beauty of nums.

// Note that:

// val1 | val2 is bitwise OR of val1 and val2.
// val1 & val2 is bitwise AND of val1 and val2.


#include<bits/stdc++.h>
using namespace std;
  class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int temp=nums[0];
        for(int i=1;i<nums.size();i++){
           int a=nums[i];
            temp =((temp|temp)&temp)^((temp|temp)&a)^((temp|a)&temp)^((temp|a)&a)^((a|temp)&temp)^((a|temp)&a)^((a|a)&temp)^((a|a)&a);

        }
        return temp;
    }
};                            
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}