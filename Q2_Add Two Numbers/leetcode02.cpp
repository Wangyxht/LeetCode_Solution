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

 #include<iostream>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode;
        ListNode* p=ans,*p1=l1,*p2=l2;
        while(!(p1==NULL && p2==NULL)){
            int nextVal=0;
            if(p1!=NULL && p2!=NULL){                
                nextVal=(p1->val+p2->val+p->val)/10;
                p->val=(p1->val+p2->val+p->val)%10;
            }
            else if(p1==NULL && p2!=NULL){
                nextVal=(p->val+p2->val)/10;
                p->val=(p->val+p2->val)%10;
                
            }
            else if(p1!=NULL && p2==NULL){
                nextVal=(p->val+p1->val)/10;
                p->val=(p->val+p1->val)%10;
            }
            if(p1!=NULL){
                p1=p1->next;
            }
            if(p2!=NULL){
                p2=p2->next;
            }

            if(nextVal!=0 || !(p1==NULL && p2==NULL)){
            p->next=new ListNode;
            p->next->val=nextVal;
            p=p->next;

            }

        }

        return ans;
        
        

    }
};