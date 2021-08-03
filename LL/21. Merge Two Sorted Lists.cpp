// 8 ms
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 ) return l2;
        if(!l2) return l1;
        ListNode *not_ans = l1;
        if(l1->val > l2->val)
        {
            not_ans = l2;
            l2 = l2->next;
        }
        else
        {
            l1 = l1->next;
        }
        ListNode *ans = not_ans;
        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                ans->next = l1;
                l1 = l1->next;
            }
            else
            {
                ans->next = l2;
                l2 = l2->next;
            }
            ans = ans->next;
        } 
        if(!l1){ans->next = l2;} // means l1 is not empty than l2 is NULL:
        else{ans->next = l1;} //means l2 is not empty than l1 is NULL:
        return not_ans;
        
    }
};
