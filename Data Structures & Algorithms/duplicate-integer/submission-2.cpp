class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int x: nums){
            if(!a.insert(x).second)
                return true;
        }
        return false;
    }
};