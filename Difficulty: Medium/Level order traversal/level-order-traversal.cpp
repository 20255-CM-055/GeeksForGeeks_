/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>> ans;
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            vector<int> level;
            
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                
                if(curr->left){
                    q.push(curr->left);
                }
                
                if(curr->right){
                    q.push(curr->right);
                }
                
                level.push_back(curr->data);
            }
            ans.push_back(level);
        }
        
        return ans;
        
    }
};