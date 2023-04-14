#ifndef RECTANGLE
#include <iostream>

using namespace std;

class Rectangle
{
private:
    /* data */
public:
    Rectangle(/* args */);
    int width, height, sum;
    int getArea();
    ~Rectangle();
};

Rectangle::Rectangle(/* args */)
{
}
int Rectangle::getArea(int width, int height){
    sum = width * height;
}

Rectangle::~Rectangle()
{
}



#endif // RECTANGLE