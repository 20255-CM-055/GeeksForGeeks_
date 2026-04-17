class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        map<char,int> mpp;
        
        for(char ch:s){
            mpp[ch]++;
        }
        
        int odd=0;
        
        for(auto it:mpp){
            if(it.second%2!=0){
                odd++;
            }
        }
        
        if(odd<=1){
            return true;
        }
        
        return false;
    }
};