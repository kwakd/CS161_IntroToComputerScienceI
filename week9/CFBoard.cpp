#include <iostream>
#include "CFBoard.hpp"

CFBoard::CFBoard(){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 8; j++){
            data[i][j] = '.';
        }
    }
    gameState = UNFINISHED;
}

bool CFBoard::makeMove(int col, char player){
    int colIndex = col - 1;
    if(colIndex < 0 || colIndex > 6){
        return false;
    }

    if(gameState == UNFINISHED && data[0][colIndex] == '.'){
        for(int row = 5; row >= 0; row--){
            if(data[row][colIndex] == '.'){
                data[row][colIndex] = player;
                updateGameState(row, colIndex);
                return true;
            }
        }
    }
    return false;
}

void CFBoard::updateGameState(int row, int col){
    bool foundRow = false;
    bool foundCol = false;
    bool foundMjrD = false;
    bool foundMinD = false;

    char winner = '\0';

    /*for(int r = 0; r < 8; r++){
        for(int c = 0; c < )
    }*/

    for(int r = 0; r < 7; r++){
        for(int c = 0; c < 3; c++){
            if(data[r][c] == data[r][c + 1] && data[r][c] == data[r][c + 2] && data[r][c] == data[r][c + 3] && data[r][c] != '.'){
                foundRow = true;
                winner = data[r][c];
                break;
            }
        }
    }
    for(int r = 0; r < 4; r++){
        for(int c = 0; c < 6; c++){
            if(data[r][c] == data[r + 1][c] && data[r][c] == data[r + 2][c] && data[r][c] == data[r + 3][c] && data[r][c] != '.'){
                foundCol = true;
                winner = data[r][c];
                break;
            }
        }
    }
    for(int r = 0; r < 4; r++){
        for(int c = 0; c < 3; c++){
            if(data[r][c] == data[r + 1][c + 1] && data[r][c] == data[r + 2][c + 2]&& data[r][c] == data[r + 3][c + 3] && data[r][c] != '.'){
                foundMjrD = true;
                winner = data[r][c];
                break;
            }
        }
    }
    for(int r = 0; r < 4; r++){
        for(int c = 3; c < 6; c++){
            if(data[r][c] == data[r + 1][c - 1] && data[r][c] == data[r + 2][c - 2] && data[r][c] == data[r + 3][c - 3] && data[r][c] != '.'){
                foundMinD = true;
                winner = data[r][c];
                break;
            }
        }
    }
    if(foundRow || foundCol || foundMjrD || foundMinD == true){
        if(winner == 'x'){
            gameState = X_WON;
        }
        else if(winner == 'o'){
            gameState = O_WON;
        }
        //return;
    }
    for(int c = 0; c < 6; c++){
        if(data[0][c] == '.'){
            return;
        }
    }
    gameState = DRAW;
}

void CFBoard::printBoard(){
    for(int i = 0; i < 7; i++){
        std::cout << i + 1 << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j++){
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

State CFBoard::getGameState(){
    return gameState;
}
