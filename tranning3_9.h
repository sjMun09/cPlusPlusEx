#ifndef OVAL
#define OVAL

#include <iostream>

using namespace std;

class Oval
{
private:            // 멤버 변수는 private으로 선언
    int width;      // 타원의 가로
    int height;     // 타원의 세로
    int length;     // 타원의 길이
public:             // 멤버 함수는 public으로 선언
    Oval(int a, int b); // 너비와 높이 값을 매개 변수로 받는 생성자
    Oval();             // 매개변수 없는 생성자 
    int getWidth();     // 가로 값을 반환하는 함수
    int getHeight();    // 세로 값을 반환하는 함수
    void set(int w, int h); // 가로, 세로 값을 설정하는 함수
    void show();            // 가로, 세로 값을 출력하는 함수
    ~Oval();                // 소멸자
};

Oval::Oval(int a, int b)   // 생성자 정의
{
    width = a;             // 멤버 변수 초기화
    height = b;
}

Oval::Oval()               // 생성자 정의
{
    width = 0;             // 멤버 변수 초기화
    height = 0;
}

int Oval::getWidth()       // 가로 값을 반환하는 함수
{
    return width;
}

int Oval::getHeight()      // 세로 값을 반환하는 함수
{
    return height;
}

void Oval::set(int a, int b)    // 가로, 세로 값을 설정하는 함수
{
    width = a;
    height = b;
}
void Oval::show(){
    cout << "width =" << width << ", height = " << height << endl;
}

Oval::~Oval(){
    cout <<"Oval 소멸 : width = " << width <<", height =" << height << endl;
}


#endif