class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int n = arr.size();
        int ans = arr[0];

        for(int i = 1; i < n; i++) {

            int v2;

            int prevnodelete = nodelete;
            int prevonedelete = onedelete;

            nodelete = max(arr[i], prevnodelete + arr[i]);

            if(prevonedelete == INT_MIN) {
                v2 = arr[i];
            }
            else {
                v2 = prevonedelete + arr[i];
            }

            onedelete = max(prevnodelete, v2);

            ans = max(ans, max(nodelete, onedelete));
        }

        return ans;
    }
};