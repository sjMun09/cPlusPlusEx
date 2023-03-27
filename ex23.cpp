#include <iostream>

using namespace std;

int main(){

    cout << "당신의 나이를 입력";
    int age;
    cin >> age;

    if(age <0||age >100){
        cout << "구라치지마\n";
    }else if (20 <=age && age<30){
        cout << "20대군요,\n";
    }else cout << "당신의 나이를 잘 모르겠습니다\n";

    return 0;
}