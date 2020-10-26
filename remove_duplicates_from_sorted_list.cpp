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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return NULL;
        }
        ListNode* ans=head;
        while(head){
            if(!head->next){
                break;
            }
            while(head->next->val==head->val){
            if(!head->next){
                break;
            }
                if(!head->next->next){
                    head->next=NULL;
                    break;
                }
                head->next=head->next->next;
            }
            head=head->next;
        }
        return ans;
    }
};