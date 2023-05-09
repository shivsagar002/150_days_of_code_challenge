class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        int p=nums.size()-1;
        for(int i=0; i<=p; i++){
            if(nums[i]==val){
                swap(nums[i],nums[p]);
                i--;
                p--;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};