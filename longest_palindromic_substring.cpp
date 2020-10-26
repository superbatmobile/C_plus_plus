class Solution {
public:
    string longestPalindrome(string s) {
        int max_len=0;
        int start=0;
        for(int i=0;i<s.size();i++){
            searchPalindrome(s,i,i,start,max_len);;
            searchPalindrome(s,i,i+1,start,max_len);
        }
        return s.substr(start,max_len-1);
    }
    
    void searchPalindrome(string s,int left, int right, int &start, int &max_len){
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            --left; ++right;
        }
        if (max_len < right - left ) {
            start = left + 1;
            max_len = right - left ;
        }
    }
    
};