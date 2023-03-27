#include <iostream>

using namespace std;

int main(){

    double* p3 = new double[3]; // double 형 데이터 3개를 저장할 수 있는 공간을 대입합니다.
    p3[0] = 0.2; // p3를 배열 이름처럼 취급합니다.
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 +1; // 포인터를 증가시킵니다.
    
    cout << "Now p3[0] is " << p3[0] << " and ";

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 -1;     // 다시 시작 위치를 지시합니다
    delete[] p3;    // 배열 메모리를 해제합니다.
    // cin.get();
    
    return 0;
}