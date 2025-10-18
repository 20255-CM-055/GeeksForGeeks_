/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
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
    int findMedian(Node* root) {
        // Code here
        vector<int> arr;
        
        if(root==NULL)
        {
            return 0;
        }
        
        inorder(root,arr);
        
        int n=arr.size();
        
        if(n%2==0){
            return arr[(n/2)-1];
        }
        
        return arr[(n/2)];
    }
};