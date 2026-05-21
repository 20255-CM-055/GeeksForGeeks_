// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> st;
        string ans;
        
        for(char ch:s){
            if(st.find(ch)==st.end()){
                st.insert(ch);
                ans=ans+ch;
            }
        }
        
        return ans;
    }
};