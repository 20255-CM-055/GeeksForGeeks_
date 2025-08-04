class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int> mpp;
        int maxi=0;
        int l=0;
        
        for(int r=0;r<n;r++)
        {
            mpp[arr[r]]++;
            
            while(mpp.size()>2)
            {
                mpp[arr[l]]--;
                
                if(mpp[arr[l]]==0)
                {
                    mpp.erase(arr[l]);
                }
                l++;
            }
            
            maxi=max(maxi,r-l+1);
        }
        
        return maxi;
    }
};