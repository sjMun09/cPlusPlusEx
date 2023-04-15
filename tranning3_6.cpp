#include "tranning3_6.h"

int main(){

    Random r;
    cout << "--0에서" << RAND_MAX << "까지의 랜덤 함수 10 개 --" <<endl;
    for (int i = 0; i < 10; i++){
        int n = r.next(); // 0에서 RAND_MAX 사이의 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl << endl << "--2에서 " << "10 까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++){
        int n = r.nextInRange(2,10); // 2 에서 10 사이 랜덤한 정수
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}