class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int r=mat.size();
        int c=mat[0].size();
        vector<int> temp;
        
        for(int i=0;i<r*c;i++){
            temp.push_back(mat[i/c][i%c]);
        }
        
        sort(temp.begin(),temp.end());
        
        // reverse(temp.begin(),temp.end());
        
        return temp[k-1];
    }
};
