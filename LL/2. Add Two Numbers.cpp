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
///////   O(m*n)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // striver method
        ListNode *demo = new ListNode();
        ListNode* temp = demo;
        int sum; int carry=0; // sum will store curr sum of LLs val
        while(l1 != NULL || l2 != NULL || carry != 0)
        {
            sum = 0;
            if(l1!=NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum / 10; // extracting digit at tens place for carry
            sum = sum % 10; // extracting digit at ones place for storing as ans 
            ListNode *node = new ListNode(sum); 
            temp->next = node;
            temp = temp->next;
        }
        return demo->next; // actual ans is starting from next
    }
};
