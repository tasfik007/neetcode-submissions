class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows & cols
        for(int i=0;i<9;i++) {
            bool row[10] = {false};
            bool col[10] = {false};
            for(int j=0;j<9;j++) {
                if(board[i][j] != '.') {
                    int num = board[i][j]-'0';
                    if(row[num]) return false;
                    row[num] = true;
                }
                if(board[j][i] != '.') {
                    int num = board[j][i]-'0';
                    if(col[num]) return false;
                    col[num] = true;
                }
            }
        }
        //00, 01, 0-1, 10, -10, 11, 1-1,-1-1,-11
        int dx[] = {0,0,0, 1, -1,1,1,-1,-1};
        int dy[] = {0,1,-1,0,0,1,-1,-1,1};
        //check boxes
        for(int i=1; i<9; i+=3) {
            for(int j=1; j<9; j+=3) {
                bool box[10] = {false};
                for(int k=0; k<9; k++) {
                    int x = i+dx[k];
                    int y = j+dy[k];
                    if(board[x][y] != '.') {
                        int num = board[x][y]-'0';
                        if(box[num]) return false;
                        box[num] = true;
                    }
                }
            }
        }
        return true;
    }
};
