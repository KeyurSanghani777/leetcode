#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int result=false;
        if(word[0]>=65 && word[0]<=90 && word[1]>=65 && word[1]<=90 )
        {
            int count=0;
            for(int i=2;i<word.length();i++)
            {
                if(word[i]>=65 && word[i]<=90)
                {
                  continue;
                }
                else{
                    count++;
                }
            }
            if(count==0){
                result=true;
            }
        }
        else if(word[0]>=65 && word[0]<=90 && word[1]>=97 && word[1]<=122 )
        {
            int count=0;
            for(int i=2;i<word.length();i++)
            {
                if(word[i]>=97 && word[i]<=122)
                {
                    continue;
                }
                else{
                    count++;
                }
            }
            if(count==0){
                result=true;
            }
        }
        else if(word[0]>=97 && word[0]<=122)
        {
            int count=0;
            for(int i=1;i<word.length();i++)
            {
                if(word[i]>=97 && word[i]<=122)
                {
                    continue;
                }
                else{
                    count++;
                }
                
            }
            if(count==0){
                result=true;
            }
        }
        return result;
    }
};                          
                     
                     
int main()
{
    //write your code here
    return 0;
}