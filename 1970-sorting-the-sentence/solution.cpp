class Solution {
public:
    string sortSentence(string s) {
        vector<string>word; vector<int>nums;
        string a = "",ans="";
        s += " "; 
        vector<char>drop = {'1','2','3','4','5','6','7','8','9'};

        for(int i=0;i<s.length();++i){
            if(s[i] != ' ') a += s[i];
            if(s[i] == ' '){
                word.push_back(a);
                a = "";
            }
        }
        int i = 0;
        for(int i=0;i<word.size();++i){
            int num,n; string x;
            x = word[i]; n = x.length()-1; a = x[n]; 
            num = atoi(a.c_str());
            nums.push_back(num);
        }   
        string temp;
        for(int key,j,i=0;i<nums.size();++i){
            j = i; // j = 1 i = 1
            key = nums[i]; // 1
            temp = word[i];
            while((j>0)&&(nums[j-1] > key)){
                word[j] = word[j-1];
                nums[j] = nums[j-1];
                j--;
            }
            nums[j] = key; 
            word[j] = temp;
        }
    
        for(int l=0;l<word.size();++l){
            ans += word[l];
            int size = ans.length()-1;
            for(int k=0;k<drop.size();++k){
                if(ans[size] == drop[k]) ans[size] = ' ';
            }
        }
        ans.pop_back();
        return ans;
    }
};
