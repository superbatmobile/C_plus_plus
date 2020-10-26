class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int ans=0;
        int before=-1;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i])&& m[s[i]]>before){
                before=m[s[i]];
            }
            m[s[i]]=i;
                
            
            ans=max(ans,i-before);
        
        }
        return ans;
    }
};