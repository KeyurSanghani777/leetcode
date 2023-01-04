#include<bits/stdc++.h>
using namespace std;
                     


class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum_max=0;

        for(auto &it:grid){
            sort(it.begin(),it.end());
        }

        int j=0;
        while(j<grid[0].size()){
            int maxi=0;
            for(int i=0;i<grid.size();i++){
                maxi=max(maxi,grid[i][j]);
            }
            sum_max+=maxi;
            j++;
        }



        return sum_max;
        
    }
};                     
                     
                     
int main()
{
    //write your code here
    return 0;
}



