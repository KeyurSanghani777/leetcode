class Solution {
public:
    bool checkIfPangram(string s) {
       vector<int> vec(26,0);
       for( char ch : s){
        vec[ch-'a']++;
       }
       int zero_count(vec.begin(),vec.end(),0);
       return zero_count==0;
    }
};