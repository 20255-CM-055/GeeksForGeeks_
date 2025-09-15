// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        string output="";
        for(int i=0;i<s.size();i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                continue; 
            }
            else
                output+=s[i];
        }
        return output;
    }
};