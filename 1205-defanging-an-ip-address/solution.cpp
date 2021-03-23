class Solution {
public:
    string defangIPaddr(string address) {
        int size = address.length(),i=0;
        string t;
        
        while(i<size){
            if(address[i] != '.'){
                t += address[i];
            }
            else{
                t += '[';
                t += '.';
                t += ']';
            }
            i++;
        }
        return t;
    }
};
