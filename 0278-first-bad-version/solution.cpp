// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int min=0,max=n;
        long int i;
        while(min<=max){
            i = (max+min)/2; //i =1
            if(isBadVersion(i)){
                max = i-1; // 2
            }
            else min=i+1;
        }
        return min;
    }
};
