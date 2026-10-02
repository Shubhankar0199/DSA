class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsum = nums[0];
        int minsum = nums[0];
        int total = nums[0];

        int v4;
        int a = nums[0];
        int b = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            total = total + nums[i];

            int v1 = maxsum + nums[i];
            int v2 = minsum + nums[i];
            int v3 = nums[i];

            maxsum = max(v3, v1);
            minsum = min(v3, v2);

            a = max(a, maxsum);
            b = min(b, minsum);
        }

        v4 = total - b;

        if(a < 0) {
            return a;
        }

        return max(a, v4);
    }
};