#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        
        // convert to lower case and remove other characters than alphabets
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]-'A'+'a';
            }
            if(s[i]<'a' || s[i]>'z'){
                s.erase(s.begin()+i);
                i--;
            }
        }

       

        bool res=true;
        // int i=0;
        // int j=s.size()-1;
        // while(i<=j){
        //     if(s[i]==s[j]){
        //         i++;
        //         j--;
        //     }else{
        //         res=false;
        //     }
        // }

        for(int i=0;i<s.size();i++){
            if(s[i]!=s[s.size()-1-i]){
                res=false;
            }
        }
        return res;
    }
};    
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}