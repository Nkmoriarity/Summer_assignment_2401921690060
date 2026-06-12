//                394. Decode String
class Solution{
public:
    string decodeString(string s){
        stack<int>s1;
        stack<string>s2;
        string curr="";
        int num=0;
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if(ch=='['){
                s1.push(num);
                s2.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']'){
                int z=s1.top();
                s1.pop();
                string prev=s2.top();
                s2.pop();
                string temp="";
                for(int i=0;i<z;i++){
                    temp+=curr;
                }
                curr=prev+temp;
            }
            else{
                curr+=ch;
            }
        }
        return curr;
    }
};
