#include "Rectangle.h"

int main(){

    Rectangle rect1; 
    Rectangle rect2(3,5);
    Rectangle rect3(3);
    // 객체를 3개 초기화(=생성) 하니까, 생성자 3개 필요함.

    if (rect1.isSquare()){
        cout << "rect1은 정사각형입니다." << endl;
    }
    if (rect2.isSquare()){
        cout << "rect1은 정사각형입니다." << endl;
    }
    if (rect3.isSquare()){
        cout << "rect1은 정사각형입니다." << endl;
    }
    

    return 0;
}   