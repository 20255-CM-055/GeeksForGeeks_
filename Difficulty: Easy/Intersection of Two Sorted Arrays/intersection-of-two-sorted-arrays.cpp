class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        // vector<int> ans;
        int n1=a.size();
        int n2=b.size();
        set<int> temp;
        set<int> st;
        
        for(int i=0;i<n1;i++){
            st.insert(a[i]);
        }
        
        for(int i=0;i<n2;i++){
            if(st.find(b[i])!=st.end()){
                temp.insert(b[i]);
            }
        }
        
        vector<int> ans(temp.begin(),temp.end());
        return ans;
    }
};