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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
count++; temp=temp->next;}
        cout<<count<<endl;
         if(count%2==0){
             count=count/2;
             while(count--){
                 head=head->next;
             }
             return head;
         }
        else{
            count=count/2;
            while(count--){
                // cout<<count<<endl;
                 head=head->next;
             }
             return head;
        }
        
    }
};