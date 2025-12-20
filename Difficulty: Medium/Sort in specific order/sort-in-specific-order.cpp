class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        vector<int> temp1,temp2;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                temp2.push_back(arr[i]);
            }
        }
        
         for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                temp1.push_back(arr[i]);
            }
        }
        
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        
        reverse(temp1.begin(),temp1.end());
        
        for(int a:temp2){
            temp1.push_back(a);
        }
        
        arr=temp1;
    }
};