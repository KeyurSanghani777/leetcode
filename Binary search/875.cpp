#include<bits/stdc++.h>
using namespace std;
                     
     class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int time=timefnc(mid,piles,h);
            if(time<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }

    int timefnc(int mid,vector<int>& piles,int h){
        int sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=ceil((double)piles[i]/mid);
            if(sum>h){
                return sum;
            }
        }
        return sum;
    }
};                
                     
                     
int main()
{
    //write your code here
    return 0;
}