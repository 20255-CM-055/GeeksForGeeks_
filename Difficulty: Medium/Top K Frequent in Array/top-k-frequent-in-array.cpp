class Solution {
  public:
    vector<int> topKFrequent(vector<int> &arr, int k) {
        // Your code here
        unordered_map<int,int> mpp;
        int n=arr.size();
        vector<int> ans;
        
        for(int num:arr)
        {
            mpp[num]++;
        }
        
        vector<pair<int,int>> freq;
        
        for(auto it:mpp)
        {
            freq.push_back({it.first,it.second});
        }
        
        
        sort(freq.begin(),freq.end(),[](pair<int,int> a , pair<int,int> b)
        {
           if(a.second==b.second)
           {
               return a.first>b.first;
           }
           return a.second>b.second;
        });
        
        for(int i=0;i<k && i<freq.size();i++)
        {
            ans.push_back(freq[i].first);
        }
        
        return ans;
        
        
        
        
    }
};
