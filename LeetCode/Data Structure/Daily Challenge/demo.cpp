class Solution {
public:
    int maxTrailingZeros(vector<vector<int>>& grid) {
        int m = grid.size();
    int n = grid[0].size();
    int result = 0;
    vector<vector<int>> vec(m, vector<int>(n,0));
    
    //update the vec matrix for rows
    for(int i = 0; i< m; i++){
        int mc = 1;
        int cnt = 0;
        for(int j =0; j<n; j++){
            mc *= grid[i][j];
            while((mc % 10) == 0){
                cnt++;
                mc = mc / 10;
            }
            mc = mc % 10;
            vec[i][j] = cnt;
        }
    }
    // update the values for column matrix
    for(int i = 0; i< n; i++){
        int mc = 1;
        int cnt = 0;
        for(int j =0; j<m; j++){
            mc *= grid[j][i];
            while((mc % 10) == 0){
                cnt++;
                mc = mc / 10;
            }
            mc = mc % 10;
            vec[j][i] += cnt;
            result = max(vec[j][i], result);
        }
    }
    return result;   
    }
};