class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        vector<int> ans;
        unordered_map<int,int>mpp;
        
        for(int a:arr)
        {
            mpp[a]++;
        }
        
        sort(arr.begin(),arr.end(),[&](int a,int b)
        {
            if(mpp[a]!=mpp[b])
            {
                return mpp[a]>mpp[b];
            }
            return a<b;
        });
        
        return arr;
    }
};