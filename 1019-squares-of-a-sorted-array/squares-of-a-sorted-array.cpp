class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums1) {
        int z;
        int k = 0;
        int i =0 ;
        int j=0;
        z=nums1.size();
        vector<int> pos;
        vector<int> neg;
        while(k<z){
            if(nums1[k]>0){
                pos.push_back(nums1[k]);
            }
            else {
                neg.push_back(nums1[k]);
                }
            k++;
        }
        int n=pos.size();
        int m=neg.size();
        
        while(i<n){
            pos[i]=pos[i]*pos[i];
            i++;
            
        }
        
        while(j<m){
            neg[j]=neg[j]*neg[j];
            j++;
        }
        reverse(neg.begin(), neg.end());
        // Reset IJK because they are at the last index while doing the square
        i=0;
        j=0;
        k=0;
        while(i<n && j<m){
            if(pos[i]<neg[j]){
                nums1[k]=pos[i];
                i++;
                k++;
            }
            else{
                nums1[k]=neg[j];
                j++;
                k++;
            }
        }
        
        while(i<n){
            nums1[k]=pos[i];
                i++;
                k++;
        }
        while(j<m){
            nums1[k]=neg[j];
                j++;
                k++;
        }
        return nums1;

    }
};