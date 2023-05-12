class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int n = s.length();
        bool word = false;
        for(int i=n-1; i>=0; i--){
            if(s[i]!=' '){
                word = true;
                len++;
            }
            else{
                if(word){
                    break;
                }
            }
        }
        return len;
    }
};