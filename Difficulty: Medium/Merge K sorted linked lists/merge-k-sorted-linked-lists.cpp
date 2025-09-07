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
Node* convert(vector<int> &arrs,int n)
{
    Node* head=new Node(arrs[0]);
    Node* temp=head;
    
    for(int i=1;i<n;i++)
    {
        temp->next=new Node(arrs[i]);
        temp=temp->next;
    }
    
    return head;
    
}

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        vector<int> arrs;
        
        for(Node* head:arr)
        {
            Node* temp=head;
            
            while(temp!=NULL)
            {
                arrs.push_back(temp->data);
                temp=temp->next;
            }
        }
        
        sort(arrs.begin(),arrs.end());
        int n=arrs.size();
        
        if(n==0)
        {
            return NULL;
        }
        
        return convert(arrs,n);
    }
};