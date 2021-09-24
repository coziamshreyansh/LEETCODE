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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        list = head;
        ListNode* temp = head;
        // fig out the length of LL
        while(temp)
        {
            len++;
            temp = temp -> next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        // rand() is a function that generates random numbers
        // rand()%len to maintain validity
        int rand_index = rand() % len;
        ListNode* temp = list;
        for(int i=0; i< rand_index; i++)
        {
            temp = temp-> next;
        }
        return temp->val;
        
    }
    private:
    int len = 0;
    ListNode* list;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
