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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        for(long long i=0;i<lists.size();i++){
            ListNode*temp=lists[i];
             while(temp != NULL){
                ans.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(ans.begin(),ans.end());
        ListNode*temp1=NULL;
        ListNode*head;
        for(long long i=0;i<ans.size();i++){
             ListNode * n1 = new ListNode;
               n1->val = ans[i];
                n1->next = NULL;
            if(temp1==NULL){
                temp1=n1;
                head=temp1;
                temp1->next=NULL;
            }
            else{
                temp1->next=n1;
                temp1=n1;

            }
        }
        return head;
    }
};