#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:
    void reverseString(vector<char>& s) {
        rev(0,s);
    }

    void rev(int i,vector<char>& s){
        if(i>=s.size()/2){
            return ;
        }
        char temp = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = temp;
        rev(i+1,s);

        
    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}