class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        vector<int> temp;
        
        do
        {
            // temp.push_back(arr);
            ans.push_back(arr);
        }while(next_permutation(arr.begin(),arr.end()));
        
        return ans;
    }
};