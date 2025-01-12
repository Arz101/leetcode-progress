class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;

        for(int i=0; i < nums.size(); i++){
            int comp = target - nums[i];
            if(map.find(comp) != map.end()){
                return std::vector<int>{map[comp], i};
            }
            else map.insert(std::make_pair(nums[i], i));
        }
        return std::vector<int>{};
    }
};
