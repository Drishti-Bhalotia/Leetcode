
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) {
            return head;
        }

        ListNode*temp=head;
        ListNode*curr=head->next;
        ListNode*temp1;

        while(curr!=NULL) {
            if(temp->val==curr->val) {

                while(curr!=NULL && temp->val==curr->val) {
                    temp1=curr;
                    curr=curr->next;
                }

                if(temp==head) {
                    head=curr;
                    temp=head;

                    if(temp==NULL)
                        return head;

                    curr=temp->next;
                }
                else {
                    ListNode*prev=head;

                    while(prev->next!=temp) {
                        prev=prev->next;
                    }

                    prev->next=curr;
                    temp=curr;

                    if(temp!=NULL)
                        curr=temp->next;
                }
            }
            else {
                temp=temp->next;
                curr=curr->next;
            }
        }

        return head;
    }
};
