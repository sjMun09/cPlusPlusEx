#ifndef RECTANGLE
#include <iostream>

using namespace std;

class Rectangle
{
private:
    int width, height;
public:
    Rectangle();
    Rectangle(int w,int h);
    Rectangle(int length);
    bool isSquare();
    ~Rectangle();
};

Rectangle::Rectangle(){
    width = height =1;
}
Rectangle::Rectangle(int w, int h){
    width =w;
    height=h;
}
Rectangle::Rectangle(int length){
    width = height = length;
}
boo Rectangle::isSquare(){
    if (width==height) return true;
    else return false;
}

Rectangle::~Rectangle()
{
}




#endif //RECTANGLE