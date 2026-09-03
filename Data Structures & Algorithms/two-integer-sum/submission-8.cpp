class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> d;
        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if(d.find(need) != d.end())
                return {d[need], i};
            d[nums[i]] = i; 
        }
        return {};
    }
};
