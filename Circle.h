#ifndef CIRCLE
#include <iostream>

using namespace std;

class Circle
{
private:
    /* data */
public:
    int radius;
    // 위임 생성자
    Circle();
    Circle(int r);  // 타겟 생성자
    double getArea();
    ~Circle();
};

// 위임 생성자
Circle::Circle():Circle(1){ 
}
Circle::Circle(int r){
    radius =r;
    cout << "Radius" << radius << "Circle CREATE"<<endl;
}
double Cirlce::getArea(){
    return 3.14*radius*radius;
}

Circle::~Circle()
{
}


#endif // CIRCLE