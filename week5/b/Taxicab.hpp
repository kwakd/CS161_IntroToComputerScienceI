#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab{
    private:
        int x;
        int y;
        int distance;
        int cTotal;
        int cDiv;

    public:
        Taxicab();
        Taxicab(int xcoor, int ycoor);
        int getXCoord();
        int getYCoord();
        int getDistanceTraveled();
        void moveX(int xcoord);
        void moveY(int ycoord);





};





#endif // TAXICAB_HPP
