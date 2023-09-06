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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode* temp = head;
        int length = 0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        int  equalsize = 0;
        
        equalsize = length%k;
       
        int equallength =  length/k;
        if(equallength==0){
            equallength=1;
            equalsize=0;
        }
        
      
        temp = head;
        while(k){
             ListNode* newhead = temp;
              ListNode* temp2 = NULL;
             if(temp!=NULL){
               
                 int count = 0;
                while(temp!=NULL && count!= equallength){
                     count++;
                     temp2 = temp;
                     temp=temp->next;
                }
                if(equalsize>0 && temp!=NULL){
                     cout<<"SS";
                     temp2 = temp;
                     temp=temp->next;
                     equalsize--;
                }
                 temp2->next= NULL;
             }
             else{
                newhead = NULL;
             }
            
            ans.push_back(newhead);
            k--;
        }
          
           
        
       
    return ans;
    }
};