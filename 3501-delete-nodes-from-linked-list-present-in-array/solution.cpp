/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        std::unordered_set<int> set(begin(nums), end(nums));

        ListNode* ptr = new ListNode{0};
        ptr->next = head;
        ListNode* ans = ptr;

        while(ptr != nullptr && ptr->next != nullptr){
            if(set.find(ptr->next->val) != set.end()){
                ptr->next = ptr->next->next;
            }
            else ptr = ptr->next;
        }
        return ans->next;
    }
};
