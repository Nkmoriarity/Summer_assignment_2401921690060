//                                       Find All Anagrams in a String  
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size() < p.size()){
            return ans;
        }
        vector<int> pCount(26,0);
        vector<int> wCount(26,0);
        for(char c : p){
            pCount[c-'a']++;
        }
        int k = p.size();
        for(int i=0;i<k;i++){
            wCount[s[i]-'a']++;
        }
        if(wCount == pCount){
            ans.push_back(0);
        }
        for(int i=k;i<s.size();i++){
            wCount[s[i]-'a']++;
            wCount[s[i-k]-'a']--;
            if(wCount == pCount){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};
