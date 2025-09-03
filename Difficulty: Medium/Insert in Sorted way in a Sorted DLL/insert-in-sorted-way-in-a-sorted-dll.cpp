/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
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
    if(n==0)
    {
        return NULL;
    }
    
    Node* head=new Node();
    head->data=arr[0];
    head->next=NULL;
    head->prev=NULL;
    
    Node* temp=head;
    
    for(int i=1;i<n;i++)
    {
        Node* newNode=new Node();
        newNode->data=arr[i];
        newNode->next=NULL;
        newNode->prev=temp;
        
        temp->next=newNode;
        newNode->prev=temp;
        temp=temp->next;
    }
    
    return head;
}

class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        vector<int> arr;
        
        toArr(arr,head);
        arr.push_back(x);
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        return convert(arr,n);
    }
};