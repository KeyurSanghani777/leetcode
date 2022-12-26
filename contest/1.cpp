

/**The Spicy auction for the cricket tournament Cosmos Premier Legue-2023 (CPL) is about to take place. All the players (total n in number) and their initial values (in crores) are listed in a row. The worth of players is known to increase unusually, with a player having a non-zero value increasing the value of surrounding players by 2 crores each day.  

For example, if the value of ith player is non-zero, then the value of (i−1)th player will get incremented by 2 crores as well the value of (i+1)th player will get incremented by 2 crores(if they exist).

Let's call the initial day of the auction day 0. And after that, each consecutive will be referred to as day 1, day 2, and so on.

Now you have to find the total extra value (in crore) of all players that would have been increased on the day p compared to day 0.

Input
The first line contains a single integer t(1≤t≤103)— the number of test cases.

The first line of each test case contains two integers n(1≤n≤105) and p(0≤p≤109).

The second line contains n integers - the initial value of each player in crore on day 0.

The Sum of n over all test cases does not exceed 106
Output
For each case output a single integer - total extra value (in crore) of all players that would have been increased on day p compared to day 0
Example*/


















#include<bits/stdc++.h>
#include<vector>
using namespace std;
                     
                     
                     
                     
int main()
{
    //write your code here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){

        int n,p;
        cin>>n>>p;

        cout<<"N: "<<n<<" P: "<<p<<endl;

        vector<int> v(n);
        int total_start=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            total_start+=v[i];
        }


        // print vector
        cout<<"Vector: ";
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }

        cout<<endl;


        // logic

        // make vectoe of vector to store all the values of vector after each day
        vector<vector<int>> v2(p);
        for(int i=0;i<p;i++){
            v2[i]=v;
        }


        for(int i=0;i<p;i++){
            // cout<<"afetr "<<i<<" days:"<<endl;
            
            for(int j=0;j<n;j++){
                // vector<int> temp=v;
                if(v[j]!=0){
                    if(j-1>=0){
                        // v2[i][j-1]+=2;
                        replace(v2[i].begin(),v2[i].end(),v2[i][j-1],v2[i][j-1]+2);
                    }
                    if(j+1<n){
                        // v2[i][j+1]+=2;
                        replace(v2[i].begin(),v2[i].end(),v2[i][j+1],v2[i][j+1]+2);
                    }
                }
            }

        }


        // print vector of vector
        for(int i=0;i<p;i++){
            for(int j=0;j<n;j++){
                cout<<v2[i][j]<<" ";
            }
            cout<<endl;
        }





            
        }



        




       
        
    return 0;
    }
