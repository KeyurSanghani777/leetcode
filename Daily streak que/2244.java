import java.util.Map;

class Solution {
    public int minimumRounds(int[] tasks) {

        Map<Integer, Integer> map = new HashMap<>();
        for(int  task :tasks){
            map.put(task, map.getOrDefault(task, 0) + 1);

        }
        int res = 0;
        for(Map.Entry<Integer, Integer> entry : map.entrySet()){
            int task = entry.getKey();
            int count = entry.getValue();
            if(count==1){
                return -1;
            }
            if(task%3!=0){
                res += count/3+1;
            }else{
                res += count/3;
            }
        }
        return res;
    }
}