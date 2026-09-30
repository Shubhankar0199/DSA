class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n;
        n=nums.size();
        int Maxsum=nums[0];
        int Minsum=nums[0];
        int ans = abs(nums[0]);
        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=Maxsum+nums[i];
            int v3=Minsum+nums[i];
            Maxsum=max(v1,v2);
            Minsum=min(v1,v3);
            ans = max(ans, max(abs(Maxsum), abs(Minsum)));
        }
        return ans;
        
    }
};