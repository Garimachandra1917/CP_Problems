//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
};

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }

// } Driver Code Ends


/* 

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        // Your Code
        
        //if not overflow
        if(rear!=100005)
        {
            //place integer at rear position
            arr[rear]=x;
            
            //and then increase rear by 1
            rear++;
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code   
        
        //if underflow return -1
        //1.if rear=0 (no element added)
        //2.if front>=rear (elements poped are more than elements pushed)
        if(rear==0||front>=rear)
        {
            return -1;
        }
       
        //return front element then increament front by one
        return (arr[front++]);
}
