class Solution {
  public:
    string URLify(string &s) {
        // code here
        string ans;
        
        for(char ch:s){
            if(ch==' '){
                ans=ans+"%20";
            }
            else{
                ans=ans+ch;
            }
        }
        
        return ans;
    }
};