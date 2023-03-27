#include <iostream>

using namespace std;
void swap(int,int);

int main(){

    int wallet1 = 100;
    int wallet2 = 200;

    cout << "최초 상태 " << endl;
    cout << "wallet1 = " << wallet1 <<", wallet2= "<< wallet2 <<endl;

    cout << "참조를 이용한 값의 교환\n";
    swapA(wallet1,wallet2);
    cout << "참조 교환 이후 상태\n";
    cout << "wallet1 = " <<wallet1 << ",wallet2" << wallet2 <<endl;

    cout << "포인터를 이용한 값의 교환\n";
    swapB(&wallet1,&wallet2);
    cout << "포인터 교환 이후 상태\n";
    cout << "wallet1 = " <<wallet1 << ",wallet2" << wallet2 <<endl;

    cout << "값를 이용한 값의 교환\n";
    swapC(wallet1,wallet2);
    cout << "값 교환 이후 상태\n";
    cout << "wallet1 = " <<wallet1 << ",wallet2" << wallet2 <<endl;

    return 0;
}
// 매개변수 3가지 경우,
// 참조로 전달하는 방식
void swapA(int& a, int& b){
    int temp;

    temp =a;
    a=b;
    b=temp;
}
// 포인터로 전달하는 방식
void swapB(int* a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}
// 값으로 전달하는 방식
void swapC(int a, int b){
    int temp;

    temp =a;
    a=b;
    b=temp;
}