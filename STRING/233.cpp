#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDigitOne(int n) {
        int ans=0;
        if(n<=0){
            return 0;
        }
        if(n<=9){
            return 1;
        }
        unordered_map<int,int> mp;
        mp[9]=0;
        for(int i=9;i<(INT_MAX/10);i=i*10+9){
            mp[i]=mp[i/10]+(i/10);
        }

        int temp=n;
        int divisor=1;
        while(temp>10){
            temp=temp/10;
            divisor=divisor*10;
        } 

        int firstDigit=n/divisor;
        int rem=n%divisor;

        ans=mp[divisor-1]*firstDigit;
        ans+=(firstDigit>1)?divisor:0;
        ans+=(firstDigit==1)?(rem+1):0;
        ans+=countDigitOne(rem);

        return ans;


        
        
    }
};       
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}