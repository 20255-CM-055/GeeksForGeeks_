class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        int rev=0;
        int org=n;
        
        while(n>0){
            int d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        
        return (int)pow(org,rev);
        
    }
};