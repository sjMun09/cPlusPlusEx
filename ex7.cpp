#include <iostream>

using namespace std;

int main(){

    // 데이터 형 변환
    /*
    1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
    2. 수식에 데이터형을 혼합하여 사용했을 때
    3, 함수에 매개변수를 전달할 때
    */
    int a = 3.141592;
    cout << a << endl;
   
    //강제적으로 데이터형 변환
    // typeName(a) || (typeName)a
    // 바꿀 데이터형이름 선언하고 소괄호를 써서 변수이름 씀
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;

    // c++ 에선,
    // static_cast<typeName>
    cout << static_cast<int>(ch) << endl;

    return 0;
}