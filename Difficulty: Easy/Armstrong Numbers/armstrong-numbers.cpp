// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int org=n;
        int sum=0;
        
        while(n>0){
            int d=n%10;
            sum=sum+(d*d*d);
            n=n/10;
        }
        
        if(sum==org){
            return true;
        }
        
        return false;
    }
};