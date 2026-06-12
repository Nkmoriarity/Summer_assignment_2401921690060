//                  Generate Parentheses
class Solution {
public:
    void set(vector<string>& ans,string &s,int n,int m){
        if(m+n==0){
            ans.push_back(s);
            return;
        }
        if(n>0){
            s.push_back('(');
            set(ans,s,n-1,m);
            s.pop_back();
        }
        if(m>0 && n<m ){
            s.push_back(')');
            set(ans,s,n,m-1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        set(ans,s,n,n);
        return ans;
    }
};
