class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int e = height.size()-1;
        int s = 0;
        while(s<e){
            int w = e-s;
            int h = min(height[s],height[e]);
            ans = max(ans,w*h);
            if(height[s]>height[e]){
                e--;
            }
            else{
                s++;
            }
        }
        return ans;
    }
};