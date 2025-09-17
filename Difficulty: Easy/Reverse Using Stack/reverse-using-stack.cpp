class Solution {
  public:
    string reverse(const string& s) {
        // code here
        string ans=s;
        std::reverse(ans.begin(),ans.end());
        
        return ans;
    }
};