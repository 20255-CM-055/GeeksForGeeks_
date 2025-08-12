class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int n=prices.size();
        sort(prices.begin(),prices.end());
        int i=0;
        int j=n-1;
        int maxi=0;
        int mini=0;
        
        while(i<=j)
        {
            mini=mini+prices[i];
            i++;
            j=j-k;
        }
        
        i=0;
        j=n-1;
        while(j>=i)
        {
            maxi=maxi+prices[j];
            j--;
            i=i+k;
        }
        
        return {mini,maxi};
    }
};