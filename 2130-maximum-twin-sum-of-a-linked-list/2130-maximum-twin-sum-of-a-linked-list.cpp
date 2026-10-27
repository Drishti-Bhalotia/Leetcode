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
    int pairSum(ListNode* head) {
        vector<int> nums;
        ListNode*temp=head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=nums.size()-1;
        int sum=0;
        int maxi=0;
        while(i<j){
            sum=nums[i]+nums[j];
            i++;
            j--;
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};