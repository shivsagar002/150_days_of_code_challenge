class Solution {
  public:
    int minimumSum(string str) {
        // code here
        int n = str.length();
        int ans = 0;
        int s = 0;
        char first;
        int e = n-1;
        int i=0, j=n-1;
        while(i<=j){
            if(str[i]!='?'){
                first = str[i];
                break;
            }
            else if(str[j]!='?'){
                first = str[j];
                break;
            }
            i++;
            j--;
        }
        while(s<=e){
            if(str[s]!=str[e]){
                if(str[s]=='?'){
                    str[s]=str[e];
                }
                else if(str[e]=='?'){
                    str[e]=str[s];
                }
                else{
                    return -1;
                }
            }
            else{
                if(str[s]=='?'){
                    if(s==0){
                        str[s]=first;
                        str[e]=first;
                    }
                    else{
                        str[s]=str[s-1];
                        str[e]=str[e+1];
                    }
                }
            }
            s++;
            e--;
        }
        for(int i=0; i<n-1; i++){
            if(str[i]!=str[i+1]){
                ans += abs(str[i]-str[i+1]);
            }
        }
        return ans;
    }
};