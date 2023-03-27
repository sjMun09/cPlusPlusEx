#include <iostream>

using namespace std;

int main() {

    // 공용체 ( union)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
    union Myunion{
        int A;
        long B;
        float C;
    };

    Myunion test;
    test.A =3;
    cout << test.A << endl;
    test.B = 33;
    cout << test.A << endl;
    cout << test.B <<endl;
    test.C = 3.3;
    cout << test.A << endl;
    cout << test.B <<endl;
    cout << test.C <<endl;
    // 위와 같이 작성하면 구조체랑의 차이점이 무엇인지 잘 모를 것입니다.
    // 이유 : 
  

    return 0;
}