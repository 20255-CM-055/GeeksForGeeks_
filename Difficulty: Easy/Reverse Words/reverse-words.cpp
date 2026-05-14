class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        stringstream ss(s);
        string word;
        string ans;
        vector<string> temp;
        
        while(std::getline(ss,word,'.')){
            if(word!=""){
                temp.push_back(word);
            }
        }
        
        for(int i=temp.size()-1;i>=0;i--){
            ans=ans+temp[i];
            
            if(i!=0){
                ans=ans+".";
            }
        }
        
        return ans;
    }
};