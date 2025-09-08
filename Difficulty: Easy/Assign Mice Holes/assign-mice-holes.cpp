class Solution {
  public:
    int assignHole(vector<int>& mice, vector<int>& holes) {
        // code here
        
        sort(mice.begin(),mice.end());
        sort(holes.begin(),holes.end());
        
        int res=0;
        int n1=mice.size();
        int n2=holes.size();
        
        for(int i=0;i<n1;i++)
        {
            res=max(res,abs(holes[i]-mice[i]));
        }
        
        return res;
    }
};