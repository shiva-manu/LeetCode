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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        ListNode* dummy=head;
        int count=0;
        bool isComplete=false;
        while(dummy!=NULL){
           if(set.count(dummy->val)){
            if(!isComplete){
                count+=1;
                isComplete=true;
            }
           }else{
                isComplete=false;
            }
           dummy=dummy->next;
        }
      
        return count;
    }
};