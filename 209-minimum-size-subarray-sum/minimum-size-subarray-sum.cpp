class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n;
        n=nums.size();
        int low =0;
        int high=0;
        int sum=0;
        int a;
        int len=INT_MAX;
        while(high<n){
            sum=sum+nums[high];
            while(sum>=target){
                a=high-low+1;
                sum=sum-nums[low];
                len=min(len,a);
                low++;
            }
            high++;
        }
        if(len==INT_MAX){
            return 0;
        }
        return len;
    }
};