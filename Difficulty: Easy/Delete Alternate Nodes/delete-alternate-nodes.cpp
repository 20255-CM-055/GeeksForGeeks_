/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function

class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node* cur=head;
        
        while(cur!=NULL && cur->next!=NULL)
        {
            Node* temp=cur->next;
            cur->next=temp->next;
            delete temp;
            cur=cur->next;
        }
    }
};