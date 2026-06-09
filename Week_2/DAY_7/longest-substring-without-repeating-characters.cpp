 //           https://leetcode.com/problems/longest-substring-without-repeating-characters///                      
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIdx(256,-1);
        int left=0 , maxlen=0;
        for(int right=0;right<s.length();right++){
            if(lastIdx[s[right]]>=left){
                left=lastIdx[s[right]]+1;
            }
            lastIdx[s[right]]=right;
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
