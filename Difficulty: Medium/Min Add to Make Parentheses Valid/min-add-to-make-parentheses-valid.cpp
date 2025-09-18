class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        stack<char> st;
        int cnt=0;
        int insert=0;
        
        for(char ch:s)
        {
            if(ch=='(')
            {
                cnt++;
            }
            else
            {
                if(cnt>0)
                {
                    cnt--;
                }
                else
                {
                    insert++;
                }
            }
        }
        
        return cnt+insert;
    
    }
};