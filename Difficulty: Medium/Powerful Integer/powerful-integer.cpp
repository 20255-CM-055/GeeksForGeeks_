class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
        // code here
    
       map<int,int> mpp;
       
       for(auto & inte:intervals)
       {
           int start=inte[0];
           int end=inte[1];
           
           mpp[start]+=1;
           mpp[end+1]-=1;
       }
       
       int cur=0;
       int ans=-1;
       
       auto it=mpp.begin();
       auto prev=it++;
       
       while(it!=mpp.end())
       {
           cur=cur+prev->second;
           
           int from=prev->first;
           int to=it->first;
           
           if(cur>=k)
           {
               ans=max(ans,to-1);
           }
           
           prev=it;
           it++;
       }
       return ans;
    }
};