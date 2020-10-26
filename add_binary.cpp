class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int add=0;
        while(a.size()>0 && b.size()>0){
            int da=a.back()-'0';
            int db=b.back()-'0';
            int sum=add+da+db;
            add=sum/2;
            ans =to_string(sum%2)+ans;
            a.pop_back();
            b.pop_back();
        }
        while(a.size()>0){
            int da=a.back()-'0';
            int sum=add+da;
            add=sum/2;
            ans =to_string(sum%2)+ans;  
            a.pop_back();
        }
        while(b.size()>0){
            int db=b.back()-'0';
            int sum=add+db;
            add=sum/2;
            ans =to_string(sum%2)+ans;  
            b.pop_back();
        }
        if(add>0){
            ans=to_string(add)+ans;
        }
        return ans;
    }
};