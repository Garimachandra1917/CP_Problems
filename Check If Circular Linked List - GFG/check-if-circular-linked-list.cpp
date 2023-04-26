//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


/* Function to get the middle of the linked list*/
bool isCircular(struct Node *head);

/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){

        cin>>n>>k;
	    Node *head=NULL, *tail = NULL;
	    int x;
	    cin >> x;
	    head = new Node(x);
	    tail = head;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>x;
	        tail -> next = new Node(x);
	        tail = tail -> next;
	    }
        if (k==1 && n >= 1)
              tail->next = head;


    printf("%d\n", isCircular(head));
    }
    return 0;
}


// } Driver Code Ends


/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   
   // an empty list is circular
   if(head==NULL)
   {
       return true;
   }
   
   //if not NULL
   else 
   {   
       
       //declare and initialize a node pointer to head next
       Node *ptr=head->next;
    
       //traverse it while it is not equal to head or NULL
       while(ptr!=head && ptr!=NULL){
           ptr=ptr->next;
       }
       //if equals to head , it is circular 
       //return 1
       if(ptr==head)
       {
           return true;
       }
       
       //if not equal to head ,then must be equal to NULL
       //return 0
       else 
        return false;
   }
}
