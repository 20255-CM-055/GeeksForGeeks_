// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        
        string f=arr[0];
        string l=arr[n-1];
        string ans;
        
        for(int i=0;i<min(f.size(),l.size());i++)
        {
            if(f[i]!=l[i])
            {
                return ans;
            }
            ans=ans+f[i];
        }
        
        return ans;
    }
};