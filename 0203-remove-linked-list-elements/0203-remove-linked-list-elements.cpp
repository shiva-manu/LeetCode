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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=head;
        ListNode* newNode=new ListNode(-1);
        ListNode* tail=newNode;
        while(dummy!=NULL){
            if(dummy->val!=val){
                tail->next=dummy;
                tail=tail->next;
            }
            dummy=dummy->next;
        }
        tail->next=NULL;
        return newNode->next;
    }
};