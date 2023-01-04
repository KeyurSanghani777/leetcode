#include<bits/stdc++.h>
using namespace std;
           class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> cumsum;
        // int sum=0;
        cumsum.push_back(0);

       for(int i=1;i<=nums.size();i++){
           cumsum[i]=cumsum[i-1]+nums[i-1];
         }


        int summax= 0;

        // for(int i=1;i<=nums.size();i++){
        //     int sum=0;
        //     for(int j=0;j<i;j++){
        //         sum =cumsum[i] - cumsum[j];
        //         summax=max(sum,summax);
        //     }
        // }

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<=nums.size();j++){
                summax=max(summax,cumsum[j]-cumsum[i]);
            }
        }




        return summax;
    }
};          
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}