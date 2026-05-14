class Solution {
  public:
  public:
  
    int fact(int rem){
        int f=1;
        
        for(int i=1;i<=rem;i++){
            f=f*i;
        }
        
        return f;
    }
    int is_StrongNumber(int n) {
        // Code here.
        int org=n;
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=fact(rem);
            n=n/10;
        }
        
        if(sum==org){
            return 1;
        }
        return 0;
    }
};
