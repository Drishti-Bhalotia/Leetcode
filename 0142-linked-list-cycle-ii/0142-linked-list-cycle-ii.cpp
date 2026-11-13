
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode* temp = head;
        ListNode* curr = head;

        while(temp != NULL && temp->next != NULL) {
            curr = curr->next;
            temp = temp->next->next;

            if(curr == temp)
                break;
        }
        if(temp == NULL || temp->next == NULL)
            return NULL;
        ListNode* curr1 = head;
        while(curr1 != curr) {
            curr1 = curr1->next;
            curr = curr->next;
        }

        return curr1;
    }
};
