class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=*max_element(arr.begin(),arr.end());
        int ans=-1;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]>ans && arr[i]<maxi){
                ans=arr[i];
            }
        }
        
        return ans;
    }
};