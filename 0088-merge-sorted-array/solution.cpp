class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int front = m-1, back = m+n;
        int mid = n-1;

        while(mid >= 0){
            if(front >= 0 && nums1[front] > nums2[mid]){
                nums1[--back] = nums1[front];
                front--;
            }else{
                nums1[--back] = nums2[mid];
                mid--;
            }
        }
    }
};
