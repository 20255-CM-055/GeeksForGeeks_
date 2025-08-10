class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        long long sum=0;
        
        for(int i=1;i<=n;i++)
        {
            sum=sum+i*(n/i);
        }
        
        return sum;
    }
};