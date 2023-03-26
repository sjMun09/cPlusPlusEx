#include <iostream>

using namespace std;

int main(){

    // bool : 0 혹은 1 만 사용가능.
    // 참고로 0은 FALSE 1 은 TRUE
    bool a = 0;
    bool b = 1;
    bool c = 10;

    // 0 이외의 모든 값은  1로 저장하기 때문에 출력할 때는 당연지사 0 1 1로 출력됨.
    cout << a << " "<< b << " " << c << endl;

    return 0;
}