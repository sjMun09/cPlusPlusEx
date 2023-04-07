#include <iostream>
using namespace std;

// Circle 선언부
class Circle{
    public:
    int radius;
    double getArea();
};

// Circle 구현부 (::)로 표현
double Circle:: getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut; // 객체 donut 생성
    donut.radius =1; // donut의 멤버 변수 접근
    double area = donut.getArea();  // donut의 멤버 함수 호출, donut 객체의 면적 알아내기
    cout << "donut 면적은 " <<area << endl;

    Circle pizza;
    pizza.radius =30;
    area = pizza.getArea();
    cout << "pizza 면적" <<area << endl;

}