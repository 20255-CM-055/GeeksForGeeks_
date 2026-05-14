class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int ans=-1;
        
        // for(int i=0;i<txt.size();i++){
           ans=txt.find(pat);
        // }
        
        return ans;
    }
};