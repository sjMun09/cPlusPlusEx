#include <iostream>

using namespace std;

const float PIE = 3.14;
// 함수의 원형 미리 정의
void cheers(int n);
float circle(int x);

int main(){

    int a;
    cout << "하나의 수를 입력하십시오." << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "원의 반지름 길이를 입력하세요." << endl;
    cin >> b;
    float c = circle(b);
    cout << "원의 넓이는" << c << "입니다." << endl;
}
// 함수를 정의한 부분
// cheers 라는 부분은, void로 선언. return 없음.(생략)
void cheers(int n){ 
    for (int i = 0; i < n; i++)
    {
        cout << "cheers" << endl;
    }
}

float circle(int x){
    return x * x * PIE;
}