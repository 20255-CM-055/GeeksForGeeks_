/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        map<int,int> mpp;
        
        for(int a:arr){
            mpp[a]++;
        }
        
        for(auto it:mpp){
            if(it.first==x){
                return it.second;
            }
        }
        
        return 0;
    }
};