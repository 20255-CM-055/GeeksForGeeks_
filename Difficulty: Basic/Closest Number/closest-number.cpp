class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int quotient = n / m;
        
        int multiple1 = m * quotient;
        
        int multiple2 = (n * m > 0) ? m * (quotient + 1) : m * (quotient - 1);
        
        int diff1 = abs(n - multiple1);
        int diff2 = abs(n - multiple2);
        
        if (diff1 < diff2) {
            return multiple1;
        } else if (diff2 < diff1) {
            return multiple2;
        } else {
            if (abs(multiple1) >= abs(multiple2)) {
                return multiple1;
            } else {
                return multiple2;
            }
        }
    }
};