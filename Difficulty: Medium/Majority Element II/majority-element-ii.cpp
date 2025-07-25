class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> ans;
        map<int,int> mpp;
        
        for(int a:arr)
        {
            mpp[a]++;
        }
        
        for(auto it:mpp)
        {
            if(it.second>n/3)
            {
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};