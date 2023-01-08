// 6289. Find Xor-Beauty of Array

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
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
           for(int j=0;j<nums.size();j++){
               for(int k=0;k<nums.size();k++){
                   temp.push_back((nums[i]|nums[j])&nums[k]);
               }
           }
           
        }
        int ans=0;
        for(int i=0;i<temp.size();i++){
            ans=ans^temp[i];
        }
        return ans;
    }
};                  
                     
                     
int main()
{
    //write your code here
    return 0;
}