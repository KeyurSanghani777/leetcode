#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
                     
 class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int ans=0;
        sort(nums.begin(),nums.end());
        
        
        int p=0;
        int n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans=0;
                return ans;
            }else if(nums[i]<0){
                n++;
            }
            else{
                p++;
            }
        }
        if(n%2==0){
            ans=1;
        }
        else{
            ans=-1;
        }
        return ans;
    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}