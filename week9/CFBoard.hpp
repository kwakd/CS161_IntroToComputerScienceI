#ifndef CFBOARD_HPP
#define CFBOARD_HPP


enum State{
    X_WON,
    O_WON,
    DRAW,
    UNFINISHED
};

class CFBoard{
    private:
        char data[6][7];
        State gameState;
    public:
        CFBoard();
        bool makeMove(int col, char player);
        void updateGameState(int row, int col);
        void printBoard();
        State getGameState();

};
#endif // CFBOARD_HPP
