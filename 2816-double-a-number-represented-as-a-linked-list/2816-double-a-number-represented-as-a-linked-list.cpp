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
    ListNode* doubleIt(ListNode* head) {
        stack<int> s;
        if(head==NULL){
            return head;
        }
        ListNode*temp=head;
        while(temp!=NULL){
            s.push(temp->val);
            temp=temp->next;
        }
        ListNode*k=NULL;
        int carry=0;
        while(!s.empty()){
            int sum=s.top()*2+carry;
            ListNode*n1=new ListNode(sum%10);
            n1->next=k;
            k=n1;
            s.pop();
            carry=sum/10;
        }
        if(carry!=0){
             ListNode*n1=new ListNode(carry);
            n1->next=k;
            k=n1;
        }

        return k;
    }
};