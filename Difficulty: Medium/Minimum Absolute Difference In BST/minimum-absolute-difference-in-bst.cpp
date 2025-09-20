/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/
void inorder(Node* root,vector<int> &arr)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}

class Solution {
  public:
    int absolute_diff(Node *root) {
        // Your code here
        vector<int> arr;
        
        inorder(root,arr);
        
        int n=arr.size();
        int small=INT_MAX;
        
        for(int i=1;i<n;i++)
        {
            int dif=abs(arr[i]-arr[i-1]);
            
            small=min(small,dif);
        }
        
        return small;
    }
};
