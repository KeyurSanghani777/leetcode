#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long minoperation=INT_MIN;
        int n1=nums1.size();
        int i=0;
        int j=0;
        for(int e=0;e<n1-1;e++)
        {
            vector<int> temp1;
            int operation=0;
            // initialize temp1 with nums1
            for(int j=0;j<n1;j++)
            {
                temp1.push_back(nums1[j]);
            }
            for(int f=e+1;f<n1;f++)
            {
                temp1[e]=temp1[e]+k;
                temp1[f]=temp1[f]-k;
                operation=operation+1;




                
                
            }
            minoperation=min(minoperation,operation);
            
        }
    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}