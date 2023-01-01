#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    bool wordPattern(string pattern, string s) {
        bool ans = false;
        vector<string> temp;
        string t;
        for(char c: s){
            if(c==' '){
                temp.push_back(t);
                t="";
            }
            else{
                t=t+string(1,c);
            }
        }
        temp.push_back(t);
        // for(string s:temp) cout<<s<<" ";
        // return false;


        if(pattern.size()>temp.size()){
            return false;
        }

        map<string,char> mp;
        map<char,string> mp2;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]]=pattern[i];
            }
            else{
                if(mp[temp[i]]!=pattern[i]){
                    return false;
                }
            }
        }
        for(int i=0;i<pattern.size();i++){
            if(mp2.find(pattern[i])==mp2.end()){
                mp2[pattern[i]]=temp[i];
            }
            else{
                if(mp2[pattern[i]]!=temp[i]){
                    return false;
                }
            }
        }

        return true;

        
    }
};                    
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}