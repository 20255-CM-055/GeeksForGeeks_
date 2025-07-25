// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n1=arr1.size();
        int n2=arr2.size();
        
        for(int i=0;i<n2;i++)
        {
            arr1.push_back(arr2[i]);
        }
        
        sort(arr1.begin(),arr1.end());
        int len=arr1.size();
        
        int half=len/2;
        
        return arr1[half-1]+arr1[half];
    }
};