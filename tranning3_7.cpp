#include "tranning3_7.h"

int main(){

    Random r;
    cout << "--0에서 " << RAND_MAX << "까지의 짝수 랜덤 함수 10 개 --" << endl;
    for (int i = 0; i < 10; i++){
        int n = r.next() * 2; // 0에서 RAND_MAX 사이의 랜덤한 짝수 정수
        cout << n << ' ';
    }
    cout << endl << endl << "--2에서 9 까지의 랜덤 홀수 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++){
        int n = r.nextInRange(2,9,1); // 2 에서 9 사이 랜덤한 홀수 정수
        // r.nextInRange(2,9,1) 함수는 2에서 9 사이의 랜덤한 홀수 정수를 생성합니다. 
        // 1은 매개변수 값은 홀수를 의미합니다. 만약 짝수를 생성하고 싶다면, 0 값을 전달하면 됩니다.
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}