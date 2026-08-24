class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        long long closest = (long long)nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[left] + nums[right];

                if (llabs(sum - target) < llabs(closest - target))
                    closest = sum;

                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else
                    return target;
            }
        }

        return (int)closest;
    }
};