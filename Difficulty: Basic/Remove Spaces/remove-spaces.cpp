class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string ans;
        
        for(char ch:s){
            if(ch==' '){
                continue;
            }
            else{
                ans=ans+ch;
            }
        }
        
        return ans;
    }
};