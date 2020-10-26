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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head){
            return NULL;
        }
        ListNode *ans=head;
        if(m==n){
            return head;
        }
        for(int i=1;i<m-1;i++){
            head=head->next;
        }
        ListNode *start=head;
        ListNode* starts=start;
        if(m!=1){
        start=start->next;
        }
        ListNode* ne=start;

        for(int i=m;i<n;i++){
            ListNode* temp=start->next;
            if(!temp){
                break;
            }
            if(temp->next==NULL){
                start->next=NULL;
                temp->next=ne;
                ne=temp;
                break;
            }
            start->next=temp->next;
            temp->next=ne;
            ne=temp;
        }
        if(m==1){
            return ne;
        }
        starts->next=ne;
        
        
        return ans;
    }
};