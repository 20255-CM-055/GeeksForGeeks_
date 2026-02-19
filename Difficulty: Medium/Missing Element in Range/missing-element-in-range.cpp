class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        int n=arr.size();
        vector<int> ans;
        unordered_set<int> s(arr.begin(),arr.end());
        
        for(int i=low;i<=high;i++){
            if(s.find(i)==s.end())
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};