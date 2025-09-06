// User function Template for C++
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
    Node *moveToFront(Node *head) {
        // code here
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        vector<int> arr;
        
        Node* temp=head;
        
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int n=arr.size();
        
        rotate(arr.begin(),arr.end()-1,arr.end());
        
        return convert(arr,n);
    }
};