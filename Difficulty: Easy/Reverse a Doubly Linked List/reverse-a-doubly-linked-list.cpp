/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
void toArr(vector<int> &arr,Node* head)
{
    Node* temp=head;
    
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
}

Node* convert(vector<int> &arr,int n)
{
    Node* head=new Node(arr[0]);
    Node* temp=head;
    Node* front=temp->next;
    Node* back=temp->prev;
    
    for(int i=1;i<n;i++)
    {
        Node* newNode=new Node(arr[i]);
        temp->next=newNode;
        newNode->prev=temp;
        temp=temp->next;
    }
    
    return head;
}

class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        vector<int> arr;
        Node* temp=head;
        
        toArr(arr,head);
        std::reverse(arr.begin(),arr.end());
        
        int n=arr.size();
        return convert(arr,n);
    }
};