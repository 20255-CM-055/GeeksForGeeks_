// User function template for C++
class Solution {
  public:
    // Converts arr[0..n-1] to reduced form.
    void convert(int arr[], int n) {
        // code here
        vector<int> ans;
        // int n=arr.size();
        
        vector<int> temp(arr,arr+n);
        
        sort(temp.begin(),temp.end());
        
        unordered_map<int,int> rank;
        
        for(int i=0;i<n;i++)
        {
            rank[temp[i]]=i;
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i]=rank[arr[i]];
        }
        
        
    }
};