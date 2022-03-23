#include "../include/Solution_solveNQueens.h"

#include <unordered_set>

using namespace std;

vector<vector<string> > Solution_solveNQueens(int n){
    vector<vector<string> > solution;
    vector<int> queens(n, -1); 
    unordered_set<int>columns;
    unordered_set<int>diagonals1;
    unordered_set<int>diagonals2;

    auto generateBoard = [](vector<int> &queens, int n){
        vector<string> board;
        for (auto i : queens){
            string tmp_row(n, '.');
            tmp_row[i] = 'Q';
            board.push_back(tmp_row);
        }
        return board;
    };

    function <void(int row)> backTrack;
    backTrack = [&](int row){
        if (row == n){
            vector<string> board = generateBoard(queens, n);
            solution.push_back(board);
        }
        else{
            for (int col = 0; col < n; ++col){
                if (columns.find(col) != columns.end() || diagonals1.find(row - col) != diagonals1.end() || diagonals2.find(row + col) != diagonals1.end()){
                    continue;
                }
                queens[row] = col;
                columns.insert(col);
                diagonals1.insert(row - col);
                diagonals2.insert(row + col);
                backTrack(row+1);
                columns.erase(col);
                diagonals1.erase(row - col);
                diagonals2.erase(row + col);
            }
        }

    };

    backTrack(0);

    return solution;
};


