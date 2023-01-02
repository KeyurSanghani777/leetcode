#include<bits/stdc++.h>
using namespace std;
              class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0;
        for(int i=0;i<grid[0].size();i++){
            int max=INT_MIN;
            int index=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]>max){
                    max=grid[j][i];
                    index=j;
                }
            }
            sum+=max;
            grid.erase(grid.begin()+index);
        }
        return sum;
    }
};                   
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}