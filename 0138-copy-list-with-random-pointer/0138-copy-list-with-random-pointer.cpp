/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        Node *head2=new Node(0);
        Node *ptr=head2;
        unordered_map <Node* ,Node*> Map;
        while(head)
        {
            ptr->next=new Node(head->val);
            ptr=ptr->next;
            ptr->random=head->random;
            Map[head]=ptr;
            head=head->next;
        }

        ptr=head2->next;
        while(ptr)
        {
            ptr->random=Map[ptr->random];
            ptr=ptr->next;
        }
        return head2->next;
        //return head2;
    }
};