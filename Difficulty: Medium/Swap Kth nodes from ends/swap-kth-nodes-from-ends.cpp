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
void toArr(Node* head,vector<int> &arr)
{
    Node* temp=head;
    
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
}


void swapping(vector<int> &arr,int k,int n)
{
    
    if(k>n)
    {
        return;
    }
    
    int start=k-1;
    int end=n-k;
    
    if(start==end)
    {
        return;
    }
    
    swap(arr[start],arr[end]);
    
    
}


Node* convert(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* temp=head;
    int n=arr.size();
    
    for(int i=1;i<n;i++)
    {
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    
    return head;
    
}
class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        Node* temp=head;
        vector<int> arr;
        toArr(head,arr);
        int n=arr.size();
        swapping(arr,k,n);
        
        
       return convert(arr);
        
    }
};