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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1;
         stack<int>s2;
         ListNode*temp=l1;
         while(temp!=NULL){
            s1.push(temp->val);
            temp=temp->next;
         }
         temp=l2;
           while(temp!=NULL){
            s2.push(temp->val);
            temp=temp->next;
         }
         int carry=0;
         ListNode*head=NULL;
         while(!s1.empty() || !s2.empty()){
            int sum=carry;
            if(!s1.empty()){
            sum+=s1.top();
            s1.pop();
            }
            if(!s2.empty()){
            sum+=s2.top();
            s2.pop();
            }
            ListNode*n1=new ListNode;
            int x=sum%10;
            n1->val=x;
            n1->next=head;
            head=n1;
            carry=sum/10;
            
         }
        if(carry!=0){
             ListNode*n1=new ListNode;
            n1->val=(carry);
            n1->next=head;
            head=n1;
        }
            
return head;
        
    }
};