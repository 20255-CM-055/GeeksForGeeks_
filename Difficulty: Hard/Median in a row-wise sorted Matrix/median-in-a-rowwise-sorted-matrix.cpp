class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int> arr;
        int r=mat.size();
        int c=mat[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr.push_back(mat[i][j]);
            }
        }
        
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        int ans=arr[n/2];
        
        return ans;
    }
};
