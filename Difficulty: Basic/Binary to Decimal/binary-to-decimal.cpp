class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int ans=0;
        
        for(char ch:b){
            int n=ch-'0';
            ans=ans*2+n;
        }
        
        return ans;
    }
};