#include<bits/stdc++.h>
using namespace std;
                     
                     
                     
                     
int main()
{
    int n;
    cin>>n;
    int arra[n];
    for(int i=0;i<n;i++){
        cin>>arra[i];
    }
    int current=2;
    int ans=2;
    int cp=arra[1]-arra[0];
    while(current<n){
        if(cp==arra[current]-arra[current-1]){
            ans++;
        }else{
            cp=arra[current]-arra[current-1];
            ans=2;
        }
        current++;
    }
    cout<<ans;
    //write your code here
    return 0;
}