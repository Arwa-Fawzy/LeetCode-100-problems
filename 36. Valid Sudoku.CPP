class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int num =9;
        bool row[num][num]={false};
        bool col[num][num]={false};
        bool subgrid[num][num]={false};
        for(int i=0; i<num; ++i){
            for(int j=0; j<num; ++j){
                if(board[i][j]=='.'){
                    continue;
                }int idx=board[i][j]-'0'-1, gridnum=(i/3)*3+(j/3);
                if(row[i][idx]||col[j][idx]||subgrid[gridnum][idx]){
                    return false;
                }
                row[i][idx] = true;
                col[j][idx] = true;
                subgrid[gridnum][idx] = true;
                
            }
        }return true;
    }
};