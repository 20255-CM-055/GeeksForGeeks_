// User function Template for Java

class Solution {
    static long isPallindrome(long N) {
        // code here
        String temp=Long.toBinaryString(N);
        
        int l=0;
        int r=temp.length()-1;
        
        while(l<r){
            if(temp.charAt(l)!=temp.charAt(r)){
                return 0;
            }
            l++;
            r--;
        }
        
        return 1;
    }
}