
int count(int n){
    if(n<=1){
        return 1;
    }
    
    int res=0;
    for(int i=0;i<n;i++){
        res+=count(i)*count(n-i-1);
    }
    
    return res;
}

class Solution {
  public:
    vector<int> countBSTs(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            int l=0,r=0;
            for(int j=0;j<n;j++){
                if(arr[j]>arr[i])
                {
                    l++;
                }
                else if(arr[j]<arr[i])
                {
                    r++;
                }
            }
              ans.push_back(count(l)*count(r));
        }
        
        return ans;
    }
};