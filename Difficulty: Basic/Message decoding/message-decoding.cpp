bool decode(string S) {
    // your code here
    string target="hello";
    int n=S.size();
    
    int j=0;
    
    for(int i=0;i<n;i++){
        if(S[i]==target[j]){
            j++;
        }
        
        if(j==5){
            return true;
        }
    }
    
    return false;
}