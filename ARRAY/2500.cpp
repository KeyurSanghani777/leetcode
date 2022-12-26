#include<bits/stdc++.h>
using namespace std;
#include<vector>

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {


        // function  for remove the element from vector
        vector<int> remove(vector<int> v, int start, int end, int val){
            for(int i=start;i<end;i++){
                if(v[i]==val){
                    v.erase(v.begin()+i);
                }
            }
            return v;
        }



        // int sum;
        // initiallize the vector of size= no of element in grid
        vector<int> max(grid.size());
        
        for(int j=0;j<grid[0].size();j++){
            for(int i=0;i<grid.size();i++){
                // int max[i]= *max_element(grid[i].begin(),grid[i].end());
                max.push_back(*max_element(grid[i].begin(),grid[i].end()));
                remove(grid[i],grid[i].begin(),grid[i].end(),max[i]);
            }
            // initialize the sum with the max vallu of max array
            int sum = sum + *max_element(max.begin(),max.end());

        }
        return sum;
    }
};