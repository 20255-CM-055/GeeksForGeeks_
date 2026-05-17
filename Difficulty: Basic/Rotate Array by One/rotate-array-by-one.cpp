// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int k=1;
        k=k%n;
        
        rev(arr,0,n-1);
        rev(arr,0,k-1);
        rev(arr,k,n-1);
    }
    
    void rev(vector<int> &arr,int st,int end){
        while(st<end){
          int temp=arr[st];
          arr[st]=arr[end];
          arr[end]=temp;
          st++;
          end--;
        }
        
        
    }
};