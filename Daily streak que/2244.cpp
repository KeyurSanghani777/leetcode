#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
      map<int,int> mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int x=it->first;
            int y=it->second;
           if(y==1){
            return -1;
           }
           if(y%3!=0){
               ans+=y/3+1;
           }
           else{
               ans+=y/3;
           }
        }
        return ans;

    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}