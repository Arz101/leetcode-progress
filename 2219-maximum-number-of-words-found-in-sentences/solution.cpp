class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>nums; int ans;

        for(int i=0;i<sentences.size();++i){
            string word = sentences[i]; int x = 0;
            for(int j=0;j<word.length();++j){
                if(word[j] == ' ')x++;
            }
            nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
        ans = nums[nums.size()-1]+1;
        return ans;
    }
};
