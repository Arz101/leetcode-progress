class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> map;

        for(int i = 0; i < numbers.size(); i++){
            int comp = target - numbers[i];
            if(map.find(comp) != map.end()){
                return {map[comp], i+1};
            }
            else {
                map.insert(make_pair(numbers[i], i+1));
            }
            
        }
        return {};
    }
};
