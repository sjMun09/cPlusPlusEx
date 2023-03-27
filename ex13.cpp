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
    // 위와 같이 작성하면 구조체랑의 차이점이 무엇인지 잘 모를 것입니다. (콘솔창 확인해야 앎)
    // 이유 : 구조체랑 달리 공용체는 한 번에 한가지의 데이터만 저장할 수 있음.
    // 다른 데이터형을 보관할 때마다 이전에 보관했던 데이터 값들이 소실됨 -> 동시 사용 불가능함.
  

    return 0;
}