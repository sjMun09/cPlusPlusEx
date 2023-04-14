#ifndef POINT
#include <iostream>

using namespace std;

class Point
{
private:
    int x,y;
public:
    Point();
    Point(int a, int b);
    void show() {
        cout << "(" << x<< ","<< y <<")" <<endl;
    }
    ~Point();
};

Point::Point:Point(0,0)(){ // 위임 생성자
}
Point::Point(int a, int b) // 타겟 생성자 
: x(a),y(b){

}

Point::~Point()
{
}


#endif //POINT