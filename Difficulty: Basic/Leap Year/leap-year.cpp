class Solution {
  public:
    bool checkYear(int n) {
        // codeif here
        
        if(((n%4)==0 && (n%100)!=0) || (n%400)==0){
            return true;
        }
        
        return false;
        
    }
};