class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans = "";
        for(int i=0; i<s.length(); i++){
            if(s[i]!=' '){
                word += s[i];
            }
            else if(s[i]==' ' && word!=""){
                if(ans == ""){
                    ans = word;
                }
                else{
                    ans = word+" "+ans;
                }
                word = "";
            }
        }
        if(word!=""){
            if(ans == ""){
                ans = word;
            }
            else{
                ans = word+" "+ans;
            }
            word = "";
        }
        return ans;
    }
};