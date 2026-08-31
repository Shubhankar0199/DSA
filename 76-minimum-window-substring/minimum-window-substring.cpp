class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        int requriedcount=t.length();
        int high;
        int low=0;
        int start =0;
        int currwindow;
        int minwindow=INT_MAX;

        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        for(high=0;high<s.length();high++){
            if(mp[s[high]]>0){
                requriedcount--;
            }
            mp[s[high]]--;
            while(requriedcount==0){
                currwindow=high-low+1;
                if(currwindow<minwindow){
                    minwindow=currwindow;
                    start = low ;
                }
                mp[s[low]]++;
                if(mp[s[low]]>0){
                    requriedcount++;
                }
                low++;

            }

        }
        if(minwindow==INT_MAX){
            return "";
        }
        return s.substr(start,minwindow);
    }
};