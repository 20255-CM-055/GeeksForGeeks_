class Solution {
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> ans;
        unordered_set<string> st;
        
        sort(s.begin(),s.end());
        
        do
        {
            st.insert(s);
        }while(next_permutation(s.begin(),s.end()));
        
        for(string word:st)
        {
            ans.push_back(word);
        }
        
        return ans;
    }
};

