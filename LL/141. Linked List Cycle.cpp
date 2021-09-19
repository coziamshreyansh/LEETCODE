/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //////////O(n) with constant space
class Solution {
public:
    bool hasCycle(ListNode *head) {
            if(head == NULL) return false;
        // two pointers slow fast pointers
        // one node single step one node two steps at a time
        ListNode* single = head;
        ListNode* double_step = head;
        while(double_step->next && double_step->next->next)
        {
            
            single = single ->next;
            double_step = double_step ->next->next;
            if(single == double_step) 
                return true;
        
        }
        return false;
       }
};
