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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next) return head;
        
        ListNode *temp=head;
        int len=0;

        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        if(k==0 || k%len==0) return head;
        k=k%len;


        ListNode *slow=head;
        ListNode *fast=head;

        for(int i=0;i<k;i++)
        {
            fast=fast->next;
        }

        while(fast->next!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }

        temp=slow->next;
        slow->next=nullptr;
        fast->next=head;

        return temp;


        
    }
};