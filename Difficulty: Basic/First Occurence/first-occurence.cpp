class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int index=txt.find(pat);
        return index;
    }
};