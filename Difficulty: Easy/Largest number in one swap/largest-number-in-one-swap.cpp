class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        int n=s.size();
        vector<int> last(256,-1);
        
        for(int i=0;i<n;i++)
        {
            last[s[i]]=i;
        }
        
        for(int i=0;i<n;i++)
        {
            for(char ch='z';ch>s[i];ch--)
            {
                if(last[ch]>i)
                {
                    swap(s[i],s[last[ch]]);
                    return s;
                }
            }
        }
        
        return s;
    }
};