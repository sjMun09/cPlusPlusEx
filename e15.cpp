#include <iostream>

using namespace std;

int main(){
    /*
    int *a; // C 스타일
    int* b; // C++ 스타일
    int* c, d; // c는 포인터 변수 , d는 int형 변수로 선언됨.
    */
    int a =6; // 수
    int* b; // 포인터는 위치를 나타냄.

    b = &a; 
    
    cout << "a의 값 " << a <<endl;
    cout << "*b의 값" << *b <<endl; // 포인터로 선언된 변수의 값을 확인할 때는 * 를 붙여서 출력

    cout << "a의 주소" << &a <<endl; 
    cout << "*b의 주소" <<b <<endl; // 포인터로 선언된 변수의 주소를 확인할 때는 아무런 표시없이 변수명만으로 출력
    
    *b = *b +1; // 포인터의 주소의 값에 변화를 줘서 값을 수정
    cout << "이제 a의 값은" << a << endl; 

    return 0;
}