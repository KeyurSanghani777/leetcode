// You are given an m x n matrix grid consisting of positive integers.

// Perform the following operation until grid becomes empty:

// Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
// Add the maximum of deleted elements to the answer.
// Note that the number of columns decreases by one after each operation.

// Return the answer after performing the operations described above.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {

        int sum=0;
        for(int i=0;i<grid.size()-1;i++){
            sort(grid[i].begin(),grid[i].end(),std::greater<>());
            // find the max element from each row
            
        }
        
    }
};
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}