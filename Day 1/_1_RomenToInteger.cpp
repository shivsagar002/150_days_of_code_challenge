class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        vector<int> num(n,0);
        for(int i=0; i<n; i++){
            if(s[i]=='I'){
                num[i]=1;
            }
            else if(s[i]=='V'){
                num[i]=5;
            }
            else if(s[i]=='X'){
                num[i]=10;
            }
            else if(s[i]=='L'){
                num[i]=50;
            }
            else if(s[i]=='C'){
                num[i]=100;
            }
            else if(s[i]=='D'){
                num[i]=500;
            }
            else{
                num[i]=1000;
            }
        }
        int ans = num[n-1];
        for(int i=n-2;i>=0;i--){
            if(num[i]<num[i+1]){
                ans -= num[i];
            }
            else{
                ans += num[i];
            }
        }

        return ans;
    }
};