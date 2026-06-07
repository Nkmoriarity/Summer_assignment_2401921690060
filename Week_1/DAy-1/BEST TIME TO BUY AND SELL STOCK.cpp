//                 BEST TIME TO BUY AND SELL STOCK
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int sub=INT_MAX;
        int add=0;
        int i=0;
        while(i<n){
            sub=min(sub,prices[i]);
            add=max(add,prices[i]-sub);
            i++;
        }
        return add;
    }
};
