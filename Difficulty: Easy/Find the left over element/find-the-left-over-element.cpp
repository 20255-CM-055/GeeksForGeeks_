class Solution {
  public:
    int leftElement(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        
        return arr[(n-1)/2];
    }
};