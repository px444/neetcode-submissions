class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(int num:nums){
            count[num]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
            for(pair<int,int>p:count){
                int element = p.first;
                int frequency = p.second;
                bucket[frequency].push_back(element);
            }
        
        vector<int>result;
        for(int i =bucket.size()-1;i>=0;i--){
            for(int num :bucket[i]){
                result.push_back(num);

                if(result.size()==k){
                    return result;
                }
            }
        }
    }
};
