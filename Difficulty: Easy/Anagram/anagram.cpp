class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n1=s1.size();
        int n2=s2.size();
        
        if(n1!=n2)
        {
            return false;
        }
        
        map<char,int> mpp1,mpp2;
        
        for(int i=0;i<n1;i++)
        {
            mpp1[s1[i]]++;
            mpp2[s2[i]]++;
        }
        
        
        return mpp1==mpp2;
    }
};