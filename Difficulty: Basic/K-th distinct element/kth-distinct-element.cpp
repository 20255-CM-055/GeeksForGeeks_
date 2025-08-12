class Solution {
  public:
    int KthDistinct(vector<int> nums, int k) {
        // Code here.
        int n=nums.size();
        int ans=-1;
        unordered_map<int,int> mpp;
        
        for(int a:nums)
        {
            mpp[a]++;
        }
        
        for(int temp:nums)
        {
            if(mpp[temp]==1)
            {
                k--;
            }
            
            if(k==0)
            {
                return temp;
            }
        }
        
        return ans;
        
    }
};