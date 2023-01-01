#include<bits/stdc++.h>
using namespace std;
   class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> result;
        for(int i=0;i<expression.size();i++){
            char c = expression[i];
            if(c=='+'||c=='-'||c=='*'){
                vector<int> left = diffWaysToCompute(expression.substr(0,i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));

                for(int j=0;j<left.size();j++){
                    for(int k=0;k<right.size();k++){
                        if(c=='+')
                            result.push_back(left[j]+right[k]);
                        else if(c=='-')
                            result.push_back(left[j]-right[k]);
                        else
                            result.push_back(left[j]*right[k]);

                    }

                }

            }


        }
        if(result.empty())
            result.push_back(stoi(expression));
        return result;
        
        
    }
};                  
                     
                     
                     
int main()
{
    //write your code here
    return 0;
}