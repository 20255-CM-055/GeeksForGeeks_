class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        map<int,int> mpp;
        vector<int> ans;
        
        for(int a:arr){
            mpp[a]++;
        }
        
        for(auto it:mpp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};