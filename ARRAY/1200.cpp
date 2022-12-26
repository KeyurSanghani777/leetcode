class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        res<vector<int>> res;
        int min=INT_MAX;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(abs(arr[i]-arr[j])<min){
                    min=abs(arr[i]-arr[j]);
                }
            }

        }
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(abs(arr[i]-arr[j])==min){
                    res.push_back({arr[i],arr[j]});
                }
            }

        }
        return res;
        
    }
};