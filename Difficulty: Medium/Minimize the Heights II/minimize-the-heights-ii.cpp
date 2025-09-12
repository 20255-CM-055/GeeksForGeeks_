class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
       
        
        int ans=arr[n-1]-arr[0];
        
        int small=arr[0]+k;
        int big=arr[n-1]-k;
      
        
        for(int i=0;i<n-1;i++)
        {
            int maxi=max(big,arr[i]+k);
            int mini=min(small,arr[i+1]-k);
            
            if(mini<0)
            {
                continue;
            }
            
            ans=min(ans,(maxi-mini));
        }
        
        return ans;
    }
};