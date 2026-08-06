class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> nums3(m + n);

        int i = 0;
        int j = 0;
        int z = 0;

        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                nums3[z] = nums1[i];
                i++;
            }
            else{
                nums3[z] = nums2[j];
                j++;
            }
            z++;
        }

        while(i < m){
            nums3[z] = nums1[i];
            i++;
            z++;
        }

        while(j < n){
            nums3[z] = nums2[j];
            j++;
            z++;
        }

        for(z = 0; z < m + n; z++){
            nums1[z] = nums3[z];
        }
    }
};