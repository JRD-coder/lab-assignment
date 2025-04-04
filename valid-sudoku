class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_map<char,int> m;
       for(int ik=0;ik<9;ik=ik+3){
        for(int jk=0;jk<9;jk+=3){
            m.clear();
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(m.find(board[i+ik][j+jk])==m.end()&&board[i+ik][j+jk]!='.') m[board[i+ik][j+jk]]=0;
                    else if(board[i+ik][j+jk]!='.') return false;
                }
            }
        }
       }
       m.clear();
       for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(m.find(board[i][j])==m.end()&&board[i][j]!='.') m[board[i][j]]=0;
                    else if(board[i][j]!='.') return false;
        }
        m.clear();
       }
       for(int j=0;j<9;j++){
        for(int i=0;i<9;i++){
            if(m.find(board[i][j])==m.end()&&board[i][j]!='.') m[board[i][j]]=0;
                    else if(board[i][j]!='.') return false;
        }
        m.clear();
       }
       return true;
    }
};
