class Solution {
  public:
    int findDifference(vector<int>& arr1, vector<int>& arr2) {
        // code
        int cnt=0;
        int n1=arr1.size();
        int n2=arr2.size();
        
        for(int i=0;i<n1;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                cnt++;
            }
        }
        
        return cnt;
    }
};
