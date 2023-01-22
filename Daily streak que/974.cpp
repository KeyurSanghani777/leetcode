// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguous part of an array.

//  Input: nums = [4,5,0,-2,-3,1], k = 5
// Output: 7
// Explanation: There are 7 subarrays with a sum divisible by k = 5:
// [4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]

#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> freq(k, 0);
        freq[0] = 1;
        int sum = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            int remainder = sum % k;
            if(remainder < 0) remainder += k;
            count += freq[remainder];
            freq[remainder]++;
        }
        return count;
    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}

