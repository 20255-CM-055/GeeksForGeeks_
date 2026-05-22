class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        // Code here
        int r=mat.size();
        int c=mat[0].size();
        vector<int> ans;
        
        for(int i=0;i<r;i++){
            int sum=0;
            for(int j=0;j<c;j++){
                sum=sum+mat[i][j];
            }
            ans.push_back(sum);
        }
        
        return ans;
    }
};
