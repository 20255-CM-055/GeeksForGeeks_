class Solution {
  public:
    int countWords(string &s) {

        // code here
        stringstream ss(s);
        int cnt=0;
        string word;
        
        while(ss>>word){
            cnt++;
        }
        
        return cnt;
    }
};
