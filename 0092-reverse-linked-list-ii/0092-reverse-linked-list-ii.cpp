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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        while(left<=right){
            ListNode*temp=head;
        int count=1;
        ListNode*curr=head;
       while(temp!=NULL && count!=left){
        temp=temp->next;
        count++;
       }
       curr=temp;
       while(temp!=NULL && count!=right){
        curr=curr->next;
        count++;
       }
       int a=temp->val;
       temp->val=curr->val;
       curr->val=a;
       left++;
       right--;
        }
       return head;


        
    }
};