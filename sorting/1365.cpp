#include<bits/stdc++.h>
using namespace std;
                     
//  class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> res(n, 0);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(nums[i]>nums[j]){
//                     res[i]++;
//                 }
//             }
//         }
//         return res;
        
//     }
// };   
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]>temp[j]){
                    res[i]++;
                }
            }
        }
        
        return res;
        
    }
};    





                     
                     
int main()
{
    //write your code here
    return 0;
}