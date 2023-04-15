#include <iostream>

using namespace std;

class Circle
{
private:
    int radius; // 원의 반지름을 저장하는 변수
public:
    // 매개변수가 없는 디폴트 생성자
    Circle(){
        radius= 1; // 반지름 변수를 1로 초기화
    }

    // int형 매개변수를 받는 생성자
    Circle(int r){
        radius = r; // 매개변수로 받은 값을 반지름 변수에 할당
    }

    // 원의 넓이를 계산하여 반환하는 함수
    double getArea();
    ~Circle();
};

Circle::Circle(){
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

Circle::~Circle()
{
}


int main(){
    Circle donut;
    Circle pizza(30);

    // 객체 이름으로 멤버 접근
    cout << donut.getArea() << endl;

    // 객체 포인터로 멤버 접근
    Circle *p;
    p = &donut;
    cout << p ->getArea() << endl; // 도넛의 getArea 호출
    cout << (*p).getArea() << endl; // 도넛의 getArea 호출


    p = &pizza;
    cout << p -> getArea() << endl;
    cout << (*p).getArea() << endl; 

    return 0;
}