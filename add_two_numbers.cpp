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
        int carry=0;
        ListNode *ans= new ListNode();
        ListNode *start=ans;
        while(l1 && l2){
            int temp=l1->val+l2->val+carry;
            carry=temp/10;
            ListNode *newN= new ListNode();
            newN->val=temp%10;
            ans->next=newN;
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int temp=l1->val+carry;
            carry=temp/10;
            ListNode *newN= new ListNode();
            newN->val=temp%10;
            ans->next=newN;
            ans=ans->next;
            l1=l1->next;            
        }
        while(l2){
            int temp=l2->val+carry;
            carry=temp/10;
            ListNode *newN= new ListNode();
            newN->val=temp%10;
            ans->next=newN;
            ans=ans->next;
            l2=l2->next;            
        }
        if(carry>0){
            ListNode *newN= new ListNode();
            newN->val=carry;
            ans->next=newN;
            ans=ans->next;
        }
        return start->next;
        
    }
};