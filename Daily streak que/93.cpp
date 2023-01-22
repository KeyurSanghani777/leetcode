#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:

    vector<string> ans;
    bool isValid(string s){
        if((s[0]=='0' && s.size()>1 )  ||s.size()==0)
            return false;
        if(s[0]=='0' && s.size()==1)
            return true;

        int num=0;
        for(int i=0;i<s.size();i++){
           int n=s[i]-'0';
           num*=10;
           if(n>=0 && n<=9)
                num+=n;
            else
                return false;
        }
        if(num>=0 && num<=255)
            return true;

        return false;
        

    }
    void backtrack(string s,int i,vector<string> segment,int j){
        if(i==s.size()){
            if(segment.size()==4){
                string temp="";
                for(int k=0;k<4;k++){
                    temp+=segment[k];
                    if(k!=3)
                        temp+=".";
                }
                ans.push_back(temp);
            }
            return;
        }
        string originalsegment, newsegment;
        originalsegment=segment[j];
        newsegment=s[i];
        if(isValid(originalsegment+s[i])){
            segment[j]+=s[i];
            backtrack(s,i+1,segment,j);
            segment[j]=originalsegment;
        }
        if(originalsegment.size()>0 && isValid(newsegment) &&segment.size()<4){
            segment.push_back(newsegment);
            backtrack(s,i+1,segment,j+1);
            segment.pop_back();
        }
        return;
        
    }
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> temp;
        temp.push_back("");
        backtrack(s,0,temp,0);
        return ans;
    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}