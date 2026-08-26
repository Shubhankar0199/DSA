class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int high;
        int low=0;
        int len=0;
        int res=INT_MIN;
        for(high=0;high<fruits.size();high++){
            mp[fruits[high]]++;
            while(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]] == 0) {
                    mp.erase(fruits[low]);
                }
                low++;
            }
                len=high-low+1;
                res=max(res,len);
            
        }
        return res;
    }
};