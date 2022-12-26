
#include<bits/stdc++.h>
using namespace std;

int floorofnumber(vector<int> &nums,int target){
    int s=0;
    int e= nums.size()-1;
    int res=-1;
    while (s<e)
    {
        int mid= s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            res=mid;
            s=mid+1;
        }
    }
    
}         
                     
                     
                     
int main()
{
    //write your code here
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    cout<<floorofnumber(nums,target);
    return 0;
}