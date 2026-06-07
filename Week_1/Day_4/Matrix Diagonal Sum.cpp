class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int i = 0;

        for(; i < mat.size(); i ++){
            sum += mat[i][i];
        }

        i = 0;
        int j = mat.size()-1;

        while(j >= 0){
            if(i != j){
                // cout<<i<<j<<endl;
                sum += mat[i][j];
            }
            j--;
            i++;
        }

        return sum;
    }
};
