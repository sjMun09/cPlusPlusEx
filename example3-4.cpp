#include "Circle.h"

int main(){

    Circle donut; // 매개 변수 없는 생성자 호출
    double area = donut.getArea(); // 위임 생성자 호출함.

    cout<< "donut 면적은" <<area <<endl;

    Circle pizza(30); // 매개변수 있는 생성자 호출 거기에 30 대입함.
    area = pizza.getArea();
    cout <<"pizza 면적" <<area <<endl;

    return 0; // 이부분은 제거해도 잘 작동함.
}