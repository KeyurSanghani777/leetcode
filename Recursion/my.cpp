#include<bits/stdc++.h>
using namespace std;

void func(int i,int n){
    if(i==0){
        return;
    }
    func(i-1,n);
    cout<<n-i+1<<" ";
}
                     
                     
                     
int main()
{
    //write your code here
    int n;
    cin>>n;
    func(n,n);
    return 0;
}