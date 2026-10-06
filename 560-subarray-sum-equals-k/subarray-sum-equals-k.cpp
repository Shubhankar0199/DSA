class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum =0;
        int count=0;
        mp[0]=1;
        int n;
        n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            count=count+mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};