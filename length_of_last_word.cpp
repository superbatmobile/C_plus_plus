class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        if(s.size()==1){
            if(s[0]!=' '){
                return 1;
            }else{
                return 0;
            }
        }
        int i;
        for(i=s.size()-1;i>0;i--){
        if(i==s.size()-1){
            while(s[i]==' '){
                i--;
                if(i<=0){
                    break;
                }
            }
        }
            if(s[i]!=' '){
                ans=ans+1;
            }
            if(s[i]==' '){

                return ans;
            }
        }
        if(i==0){
            if(s[i]!=' ') ans=ans+1;
        }
        return ans;
    }
};