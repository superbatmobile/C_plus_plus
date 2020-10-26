class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> tb(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            tb[i][0]=1;
        }
        for(int j=0;j<n;j++){
            tb[0][j]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                tb[i][j]=tb[i-1][j]+tb[i][j-1];
            }
        }
        return tb[m-1][n-1];
        
    }
};