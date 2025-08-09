/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        
        int cnt=0;
        Node* temp=head;
        
        while(temp!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        
        int mid=cnt/2;
        temp=head;
        
       for(int i=0;i<mid-1;i++)
       {
           temp=temp->next;
       }
        
        Node* del=temp->next;
    
        temp->next=temp->next->next;
            delete del;
        return head;
    }
};