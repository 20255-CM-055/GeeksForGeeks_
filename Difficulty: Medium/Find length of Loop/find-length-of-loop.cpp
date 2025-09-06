/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
int length(Node* slow,Node* fast)
{
    int cnt=1;
    fast=fast->next;
    
    while(slow!=fast)
    {
        cnt++;
        fast=fast->next;
    }
    
    return cnt;
}

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        int cnt=0;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                return length(slow,fast);
            }
        }
        
        return 0;
        
    }
};