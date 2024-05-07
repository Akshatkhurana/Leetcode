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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* nxt;
        while(curr)
        {
            nxt = curr -> next;
            curr -> next = prev;

            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    ListNode* doubleIt(ListNode* head) {
        // Reverse the original linked list
        ListNode* newHead = reverse(head);
        
        ListNode* curr = newHead;
        int carry = 0;
        
        // Traverse the reversed linked list and double each digit
        while (curr) {
            int newValue = curr->val * 2 + carry;
            curr->val = newValue % 10;
            carry = newValue / 10;
            
            if (!curr->next && carry > 0) {
                // If carry is remaining and we reached the end of the list, add a new node
                curr->next = new ListNode(carry);
                break;
            }
            
            curr = curr->next;
        }
        
        // Reverse the modified linked list again to get the correct order
        return reverse(newHead);
    }
};

