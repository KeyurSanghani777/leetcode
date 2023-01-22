#include<bits/stdc++.h>
using namespace std;
                     
 class Solution {
public:

    bool palindrome(string s){
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        int n=s.length();
        for(int i=0;i<n;i++){
            string s1=s.substr(0,i+1);
            if(palindrome(s1)){
                temp.push_back(s1);
                if(i==n-1){
                    ans.push_back(temp);
                    temp.pop_back();
                    continue;
                }
                string s2=s.substr(i+1,n-i-1);
                vector<vector<string>> ans2=partition(s2);
                for(int j=0;j<ans2.size();j++){
                    vector<string> temp2=temp;
                    for(int k=0;k<ans2[j].size();k++){
                        temp2.push_back(ans2[j][k]);
                    }
                    ans.push_back(temp2);
                }
                temp.pop_back();
            }
        }
        return ans;
    }
};                    
                     
                     
int main()
{
    //write your code here
    return 0;
}