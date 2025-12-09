class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer;
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        for(const auto& p:freq){
            if(p.second == 1){
                answer.push_back(p.first);
            }
        }
        return answer;
    }
};