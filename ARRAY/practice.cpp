#include<bits/stdc++.h>
using namespace std;

                    
                     
                     
                     
int main()
{
   set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    for(auto i:s)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    s.erase(s.begin(),s.begin()+2);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
}