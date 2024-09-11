class Solution {
    public void reverseString(char[] s) {
        int ptr = 0, ptr2 = s.length-1;
        while(ptr < ptr2){
            s[ptr] = (char)(s[ptr] ^ s[ptr2]);
            s[ptr2] = (char)(s[ptr] ^ s[ptr2]);
            s[ptr] = (char)(s[ptr] ^ s[ptr2]);
            ptr++;
            ptr2--;
        }      
    }
}
