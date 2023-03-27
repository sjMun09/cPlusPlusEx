#include <iostream>

using namespace std;

int func(int);

int main(){

    int (*pf)(int);
    // 이 포인터에게 함수의 주소를 저장
    pf = func; // 이제 이 pf는 함수를 지시하게됨 , 이제 pf가 함수이름과 같은 역할을 수행하게됨.

    cout << (*pf)(3) <<endl;

    return 0;
}

int func(int n){
    return n+1;
}