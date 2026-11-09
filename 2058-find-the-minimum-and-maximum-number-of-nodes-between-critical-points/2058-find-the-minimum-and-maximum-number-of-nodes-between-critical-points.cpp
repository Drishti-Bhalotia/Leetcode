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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode*curr;
        vector<int>k;
        ListNode*prev;
        ListNode*temp=head;
        curr=head->next;
        prev=temp;
        temp=temp->next;
        curr=curr->next;
        int count=1;
        while(curr!=NULL){
            count++;
            if(temp->val>curr->val &&temp->val>prev->val)
            k.push_back(count);
            else if(temp->val<curr->val &&temp->val<prev->val)
            k.push_back(count);
            prev=temp;
            temp=curr;
            curr=curr->next;      
        }
        vector<int>r;
        if(k.size()==0){
            k.push_back(-1);
            k.push_back(-1);
            return k;

        }
        else if(k.size()==1){
            r.push_back(-1);
            r.push_back(-1);
            return r;
        }
        
        else{
            sort(k.begin(),k.end());   
           int mini=INT_MAX;
             for(int i=1;i<k.size();i++){
             mini=min(mini,k[i]-k[i-1]);
                  }
            r.push_back(mini);
            r.push_back(k[k.size()-1]-k[0]);
        }

return r;
        
    }
};