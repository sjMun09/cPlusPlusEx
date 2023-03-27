#include <iostream>

using namespace std;

// 함수의 원형 앞에 inline 함수를 붙여서 사용함
inline float square(float x){ return x*x; };

int main(){

    //인라인 함수
    int a=5;
    cout << "한 변의 길이가 "<< a<<"인 정사각형의 넓이는?" << endl;
    float b = square(a);
    cout << b << endl;
    return 0;
}