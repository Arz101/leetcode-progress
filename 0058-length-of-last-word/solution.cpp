class Solution {
public:
    int lengthOfLastWord(string s) {
        int cont=0,cont2=0;
        int n = s.length()-1;
        
        while(n>=0){
            if(s[n] != ' ')cont++;
            else if(cont>0)return cont;
            n--;
        }
        return cont;
    }
};
