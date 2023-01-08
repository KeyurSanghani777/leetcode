#include<bits/stdc++.h>
using namespace std;
                     
                     
                     
                     
int main()
{

    // print starting time
    auto start = chrono::high_resolution_clock::now();
    cout<<"Start time: "<<start.time_since_epoch().count()<<endl;
    int n=10;
    int *p=&n;
    // cout<<*p<<endl;
    // cout<<p<<endl;

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *p1=arr;
    // cout<<*p1<<endl;
    for(int i=0;i<10;i++){
        // cout<<*p1<<" ";
        p1++;
    }
    //write your code here
    // cout<<*arr<<endl;
    
    for(int i=0;i<10;i++){
        cout<<*(arr+i)<<" ";
        
    }

    for(int i=0;i<100000;i++){
        cout<<i<<" ";
        
    }





    // print ending time
    auto end = chrono::high_resolution_clock::now();
    cout<<endl<<"End time: "<<end.time_since_epoch().count()<<endl;

    // print total time
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
    return 0;
}