class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
        int ans = 0;
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(arr[i]!=arr[j]){
                ans ++;
            }
            i++;
            j--;
        }
        if(ans%2==0){
            ans /= 2;
        }
        else{
            ans = (ans/2) +1;
        }
        return ans;
    }
};