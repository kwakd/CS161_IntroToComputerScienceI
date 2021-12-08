#ifndef BOX_HPP
#define BOX_HPP

class Box{
    private:
        double length;
        double width;
        double height;
        double volume;
        double saWH;
        double saHL;
        double saWL;
        double totalsa;

    public:
        Box();
        Box(double length, double width, double height);
        void setLength(double newLength);
        void setWidth(double newWidth);
        void setHeight(double newHeight);
        double calcVolume();
        double calcSurfaceArea();

};





#endif // BOX_HPP
