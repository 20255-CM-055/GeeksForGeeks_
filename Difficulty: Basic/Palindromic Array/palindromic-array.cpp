class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            int original = arr[i];
            int num = arr[i], rev = 0;

            // Reverse the number
            while (num > 0) {
                rev = rev * 10 + (num % 10);
                num /= 10;
            }

            // If not palindrome
            if (original != rev) {
                return false;
            }
        }
        
        return true;
    }
};
