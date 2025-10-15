/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
void inorder(Node* root,vector<int> &arr){
    if(root==NULL){
        return;
    }
    
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
class Solution {
  public:
    int kthSmallest(Node *root, int k) {
        // code here
        vector<int> arr;
        inorder(root,arr);
        
        int n=arr.size();
        
        
        if(k>n){
            return -1;
        }
        
        return arr[k-1];
    }
};