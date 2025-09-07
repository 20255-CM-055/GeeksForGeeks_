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
    Node* mergeSort(Node* head) {
        // code here
        vector<int> arr;
        Node* temp=head;
        
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        return convert(arr,n);
    }
};