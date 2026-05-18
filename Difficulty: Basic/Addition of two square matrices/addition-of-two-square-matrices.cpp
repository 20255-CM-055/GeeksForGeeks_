// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        // Code here
        int r=matrixA.size();
        int c=matrixA[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrixA[i][j]=matrixA[i][j]+matrixB[i][j];
            }
        }
    }
};