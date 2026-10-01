class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=nums[0];
        int maxsum=nums[0];
        int minsum=nums[0];
        int curmax=nums[0];
        int curmin=nums[0];

        for(int i=1;i<nums.size();i++){
            total=total+nums[i];

            curmax=max(nums[i],curmax+nums[i]);
            maxsum=max(maxsum,curmax);

            curmin=min(nums[i],curmin+nums[i]);
            minsum=min(minsum,curmin);
        }

        if(maxsum<0)
            return maxsum;

        int circular=total-minsum;

        return max(maxsum,circular);
    }
};