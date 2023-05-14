class Solution {
public:
    int leftOccr(vector<int>& nums, int target, int n){
        int s = 0, e = n-1, mid;
        int ans = -1;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                e = mid-1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
    int rightOccr(vector<int>& nums, int target, int n){
        int s = 0, e = n-1, mid;
        int ans = -1;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = leftOccr(nums,target,n);
        int right = rightOccr(nums,target,n);
        vector<int> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }
};