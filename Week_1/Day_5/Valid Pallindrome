class Solution {
public:
    bool isPalindrome(string s) {
        int end=s.length()-1,st=0;
        while(st<end){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])==tolower(s[end])){
                st++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
