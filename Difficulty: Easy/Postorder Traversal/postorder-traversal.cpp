/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int> order(Node* root, vector<int> &ans){
    
    if(root==NULL){
        return ans;
    }
    
    order(root->left,ans);
    order(root->right,ans);
    ans.push_back(root->data);
    
    return ans;
}


class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> ans;
        
        return order(root,ans);
        
    }
};