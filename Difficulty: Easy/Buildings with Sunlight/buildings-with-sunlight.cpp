class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int cnt=1;
        int n=arr.size();
        int maxheight=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>=maxheight){
                maxheight=arr[i];
                cnt++;
            }
        }
        
        return cnt;
    }
};