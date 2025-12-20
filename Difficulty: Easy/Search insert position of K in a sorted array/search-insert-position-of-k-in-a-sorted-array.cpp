class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        // sort(arr.begin(),arr.end());
        
        int ans=-1;
        
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                 ans=i;
                 break;
            }
            
             if(arr[i]>k){
                ans=i;
                break;
            }
        }
        
        if(ans==-1){
            return n;
        }
       
        return ans;
    }
};