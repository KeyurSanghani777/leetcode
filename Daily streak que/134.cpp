class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int index=-1;
        int total_gas=0;
        int total_cost=0;
        int curr_gas=0;
        int startindex=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
            curr_gas+=gas[i]-cost[i];
            if(curr_gas<0){
                startindex=i+1;
                curr_gas=0;
            }
        }
        return (total_gas<total_cost)?-1:startindex;
    }
};