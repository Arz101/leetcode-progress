class Solution {
public:
    string interpret(string command) {
        string  com;
        
        for(int i=0;i<command.length();i++){
            if(command[i] == 'G'){
                com.push_back('G');
            }
            else if(command[i] == ')' and command[i-1] == '(' ){
                com.push_back('o');
            }
            else if(command[i] == ')' and command[i-1] == 'l'){
                com.push_back('a');
                com.push_back('l');
            }
        }
        return com;
    }
};
