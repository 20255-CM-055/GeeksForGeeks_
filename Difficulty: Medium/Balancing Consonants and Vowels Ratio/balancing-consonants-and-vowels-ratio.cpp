bool isvowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        return true;
    }
    return false;
}

class Solution {
  public:
    int countBalanced(vector<string>& arr) {
        // code here
        unordered_map<int,int> mpp;
        mpp[0]=1;
        
        int balance=0;
        int cnt=0;
        
        for(auto &word:arr)
        {
            int v=0,c=0;
            for(char ch:word)
            {
                if(isvowel(ch))
                {
                    v++;
                }
                else
                {
                    c++;
                }
            }
                
                balance=balance+(v-c);
                
                if(mpp.count(balance))
                {
                    cnt=cnt+mpp[balance];
                }
                
                mpp[balance]++;
            }
        
        
        return cnt;
    }
};