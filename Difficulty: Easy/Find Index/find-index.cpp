class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here.
        vector<int> ans;
        int n=arr.size();
        
        int st=-1;
        int end=-1;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
              if(st==-1)
              {
                   st=i;
              }
              end=i;
            }
            
        }
        
        ans.push_back(st);
        ans.push_back(end);
        
        return ans;
    }
};