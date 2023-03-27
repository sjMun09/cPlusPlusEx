#include <iostream>

using namespace std;

void helloCPP(int,int);

int main(){

    int times1, times2;
    cout << "정수를 입력하십시오.\n";
    cin >> times1;
    cout << "한번 더 정수 입력"<< endl;
    cin >> times2;
    helloCPP(times1,times2);

    return 0;
}
// 함수정의
void helloCPP(int n,int m){
    for(int i=0;i<n;i++)
    cout << "HELLO, ";
    for(int i=0;i<m;i++)
    cout << " C++";
}
