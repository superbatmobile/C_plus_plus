class Solution {
public:
    int climbStairs(int n) {
        vector<int> mp;
        mp.push_back(1);
        mp.push_back(2);
        for(int i=2;i<n;i++){
            mp.push_back(mp[i-1]+mp[i-2]);
        }
        return mp[n-1];
    }
};