class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char,int> mpp={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        
        int n=s.size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int first=mpp[s[i]];
          
            
            if(i+1<n && first<mpp[s[i+1]])
            {
                ans=ans+(mpp[s[i+1]]-first);
                i++;
            }
            else
            {
                ans=ans+first;
            }
        }
        
        return ans;
    }
};