class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        map<int,int>m1;
        int n=numbers.size(),num;
        
        for(int i=0;i<n;++i){
            num = target - numbers[i];
            
            if(m1.find(num) != m1.end()){
                ans.push_back(m1[num] + 1);
                ans.push_back(i + 1);
                return ans;
            }
            m1[numbers[i]] = i;
        }
        return {};
    }
};
