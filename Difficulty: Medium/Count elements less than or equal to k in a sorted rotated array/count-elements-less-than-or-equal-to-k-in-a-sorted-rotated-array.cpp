class Solution {
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        int cnt=0;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]<=x){
                cnt++;
            }
        }
        
        return cnt;
    }
};