class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> ans;
        int n=arr.size();
        unordered_map<int,int> mpp;
        
        for(int a:arr){
            mpp[a]++;
        }
        
        for(int i=1;i<=n;i++){
            ans.push_back(mpp[i]);
        }
        
        return ans;
    }
};
