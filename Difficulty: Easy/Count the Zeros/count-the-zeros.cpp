// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int cnt=0;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cnt++;
            }
        }
        
        return cnt;
    }
};