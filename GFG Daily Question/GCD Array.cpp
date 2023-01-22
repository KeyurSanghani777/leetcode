//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:


    int solve(int N, int K, vector<int> &arr) {
        int sum = 0;
        int ans = 1;
        vector<int> pre;
        for(int i = 0; i < N; i++){
            sum += arr[i];
            pre.push_back(sum);
        }
        vector<int> div;
        for(int i=1;i*i<sum;i++){
            if(sum%i==0){
                div.push_back(i);
                if(i!=sum/i)
                    div.push_back(sum/i);
            }
        }
        for(int i:div){
             int part=0;
            for(int j=0;j<N;j++){



                if(pre[j]%i==0){
                    part++;
                }
                if(part>=K){
                    ans = max(ans,i);
                }
              
            }

        }
        return ans;
    }



};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends