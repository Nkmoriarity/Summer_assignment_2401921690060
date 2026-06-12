//                           443. String Compression      kal kardunga baki dono
class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        long long int count;
        for(int i=0;i<chars.size();i++){
            char ch = chars[i];
            count =0;
            while(i<chars.size() && chars[i]==ch ){
                count++;
                i++;
            }
            if(count==1){
                chars[idx++]=ch;
            }
            else{
                chars[idx++]=ch;
                string s= to_string(count);
                for(int z:s){
                    chars[idx++]=z;
                }
            }
            i--;
        }
        return idx;
    }
};
