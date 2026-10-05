class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i;
        int pref=0;
        int suff=0;
        int n=nums.size();
        int sum=0;
        for(i=0;i<n;i++){
            sum=sum+nums[i];
        }
        for(i=0;i<n;i++){
            suff=sum-nums[i]-pref;
            if(pref==suff){
                return i;
            }
            pref=pref+nums[i];
        }
        return -1;
    }
};