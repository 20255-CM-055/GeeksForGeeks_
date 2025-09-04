/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
Node* convert(vector<int> &arr,int n)
{
    Node* head=new Node(arr[0]);
    Node* temp=head;
    
    
    for(int i=1;i<n;i++)
    {
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    
    return head;
    
}
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        
        Node* temp=head;
        vector<int> arr;
        
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int n=arr.size();
        int l=0;
        
        for(int i=0;i<n;i+=k)
        {
            int l=i;
            int r=min(i+k-1,n-1);
            
            while(l<r)
            {
                swap(arr[l],arr[r]);
                l++;
                r--;
            }
        }
        
        head=convert(arr,n);
        
        return head;
    }
};