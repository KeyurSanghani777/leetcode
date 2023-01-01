#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v;
        for(int i=1;i<=n;i++)
            v.push_back(i);
        int result = 0;
        while(v.size()>1)
        {
            result = (result+k-1)%v.size();
            v.erase(v.begin()+result);
        }
        return v[0];


    }
};
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}