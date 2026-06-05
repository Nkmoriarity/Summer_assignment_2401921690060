class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if(r*c != m*n){
            return mat;
        }

        vector<vector<int>> newMat(r, vector<int>(c));
        int x = 0;
        int y = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                // cout<<mat[i][j]<<endl;
                newMat[x][y] = mat[i][j];
                y++;
                if(y >= c){
                    x++;
                    y = 0;
                }
            }
        }
        return newMat;
    }
};
