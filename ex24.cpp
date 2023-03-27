#include <iostream>

using namespace std;

int main(){

    int n = 0;
    while (true){

        cout << "n 의 값은" << n << "입니다" << endl;
        if (n>10)
        break;
        n++;

    }
    cout << "while 종료" << endl;

    return 0;
}