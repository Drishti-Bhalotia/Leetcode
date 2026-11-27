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
    void reorderList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return;

        vector<int> v;

        ListNode* temp = head;

        // Store all node addresses
        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = v.size() - 1;
        temp=head;
        temp->val=v[i];
        temp=temp->next;
        if(i!=j){
            temp->val=v[j];       
        }
i++;
j--;

        while(i < j) {
            temp=temp->next;
            temp->val=v[i];
             temp=temp->next;
            temp->val=v[j];
            i++;
            j--;
        }

         if(i==j){
            temp=temp->next;
            temp->val=v[j];       
        }
    }
};
