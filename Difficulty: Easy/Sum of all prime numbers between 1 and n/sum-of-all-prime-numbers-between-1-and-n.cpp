// User function Template for C++

bool prime(int n){
    if(n<=1){
        return false;
    }
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    
    return true;
}
class Solution {
  public:
    int prime_Sum(int n) {
        // Code here
        if(n<=1){
            return n;
        }
        
        int sum=0;
        
        for(int i=2;i<=n;i++){
            if(prime(i)==true){
                sum=sum+i;
            }
        }
        
        return sum;
    }
};