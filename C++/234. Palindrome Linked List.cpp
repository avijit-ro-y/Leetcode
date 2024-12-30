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
    void insert_at_tail(ListNode* &head,ListNode* &tail,int data){
        ListNode* new_node=new ListNode(data);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        tail->next=new_node;
        tail=new_node;
    
    }
    void reverse(ListNode* &head,ListNode* temp){
        if(temp->next==NULL){
            head=temp;
            return;
        }
        reverse(head,temp->next);
        temp->next->next=temp;
        temp->next=NULL;

        
    }
    bool isPalindrome(ListNode* head) {
        ListNode* new_head=NULL;
        ListNode* new_tail=NULL;
        
        ListNode* temp=head;
        while(temp!=NULL){
            insert_at_tail(new_head,new_tail,temp->val);
            temp=temp->next;
        }
        reverse(new_head,new_head);

        temp=head;
        ListNode* temp2=new_head;
        while(temp!=NULL){
            if(temp->val!=temp2->val){
                return false;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
    }
};