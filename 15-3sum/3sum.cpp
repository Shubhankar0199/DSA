class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n;
        int sum=0;
        n = nums.size();
        int i=0;
        int j=i+1;
        int k=n-1;
        sort(nums.begin(), nums.end());
        for(i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            j=i+1;
            k=n-1;
            while(j<k){
                sum=nums[j]+nums[k]+nums[i];
                if(sum==0){
                    ans.push_back({nums[j],nums[i],nums[k]});
                    while(j<k && nums[j]==nums[j+1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k-1]){
                        k--;
                    }
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else
                k--;
            }
        }
        return ans;
    }
};