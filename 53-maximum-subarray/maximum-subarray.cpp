class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Maxending;
        int ans;
        int n;
        n=nums.size();
        Maxending=nums[0];
        ans=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=Maxending+nums[i];
            Maxending=max(v1,v2);
            ans=max(ans,Maxending);
        }
        return ans;
    }
};