class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
        if(x==1){
            return y==1;
        }
        
        if(y==1){
            return true;
        }
        
        while(y>1){
            if(y%x!=0){
                return false;
            }
            y=y/x;
        }
        
        return true;
    }
};