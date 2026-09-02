class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> a;
        for(int i = 0; i < nums.size(); i++){          
            int need = target - nums[i];
            auto it = a.find(need);
            if(it != a.end())
                return {it->second, i};
            a[nums[i]] = i;
        }
        return {};
    }
};
