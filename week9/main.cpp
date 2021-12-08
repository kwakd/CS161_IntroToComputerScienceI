#include <iostream>
#include "CFBoard.hpp"

using namespace std;

int main() {
       CFBoard board;
       cout << board.getGameState() << endl;
       cout << endl;
       board.printBoard();
       board.makeMove(2, 'o');
       board.makeMove(3, 'o');
       board.makeMove(4, 'o');
       board.makeMove(5, 'o');
       board.printBoard();
       cout << endl;
       cout << board.getGameState() << endl;



       /*
        char player = 'o';
        int col;

        board.printBoard();

        while(board.getGameState() == UNFINISHED) {
                player = (player == 'x') ? 'o' : 'x';
                cout << "Player " << player << " enter your move: ";
                cin >> col;
                bool status = board.makeMove(col, player);
                while(!status) {
                        cout << "Invalid Move. Try again." << endl;
                        cout << "Player " << player << " enter your move: ";
                        cin >> col;
                        status = board.makeMove(col, player);
                }
                board.printBoard();
        }

        if(board.getGameState() == X_WON) {
                cout << "Player X won!" << endl;
        } else if(board.getGameState() == O_WON) {
                cout << "Player O won!" << endl;
        } else if(board.getGameState() == DRAW) {
                cout << "Game Drawn!" << endl;
        }*/



}
