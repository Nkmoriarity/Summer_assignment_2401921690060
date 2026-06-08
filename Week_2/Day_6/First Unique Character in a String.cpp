//                 First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string s) {
        int a[26]={0};
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
        for(int j=0;j<s.size();j++){
            if(a[s[j]-'a']==1){
                return j;
            }
        }
        return -1;
    }
};
