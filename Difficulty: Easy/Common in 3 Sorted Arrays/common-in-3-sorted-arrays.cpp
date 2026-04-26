class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int> ans;
        int n1=a.size();
        int n2=b.size();
        int n3=c.size();
        
        set<int> s1(a.begin(),a.end());
        set<int> s2(b.begin(),b.end());
        set<int> s3(c.begin(),c.end());
        
        map<int,int> mpp;
        
        for(int a:s1){
            mpp[a]++;
        }
        
        for(int b:s2){
            mpp[b]++;
        }
        
        for(int c:s3){
            mpp[c]++;
        }
        
        for(auto it:mpp){
            if(it.second==3){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};