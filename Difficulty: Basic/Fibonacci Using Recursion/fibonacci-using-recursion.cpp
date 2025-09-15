class Solution {
  public:
    int fibonacci(int n) {
        // Code here
        
        if(n==1 || n==2)
        {
            return 1;
        }
        
        int a=1;
        int b=1;
        int fib;
        
        for(int i=3;i<=n;i++)
        {
            fib=a+b;
            a=b;
            b=fib;
        }
        
        return b;
    }
};