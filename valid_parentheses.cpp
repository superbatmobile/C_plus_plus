class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)return true;
        if(s.size()==1)return false;
        stack<char> k;
        if (s[0]==')' || s[0]=='}' || s[0]==']'){
            return false;
        }
        else {
            k.push(s[0]);
        }
        for (int i=1;i<s.size();i++){
            if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
                k.push(s[i]);
            }else if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if (k.empty()){
                    return false;
                }else  {
                    if(k.top()=='(' && s[i]==')' || k.top()=='[' &&s[i]==']' || k.top()=='{' &&s[i]=='}'){
                    k.pop();
                    }
                else{
                    return false;
                }
                }
            }
        }
        if(k.empty()){
            return true;
        }else {
            return false;
        }
        
    }
};