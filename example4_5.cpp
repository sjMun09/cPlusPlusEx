#include <iostream>
using namespace std;

int main(){
    int* p;

    p = new int; // int 타입 1개 할당함
    if(!p){ // p가 NULL이면, 메모리 할당 실패함.
        cout << "메모리를 할당할 수 없습니다."
        return 0;
    }
    *p=5;
    int n=*p;
    cout << "*p=" << *p <<'\n';
    cout << "n=" << n <<'\n';
    // 할당받은 메모리 반환

    delete p; 
}