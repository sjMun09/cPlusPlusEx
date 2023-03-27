#include <iostream>
#define SIZE 20

using namespace std;

int main(){

    char animal[SIZE];
    char* ps;

    cout << "동물 이름을 입력하세요\n";
    cin >> animal;

    ps = new char[strlen(animal+1)]; // stren 소괄호로 둘러싸인 이 변수의 크기를 반환하는 함수 , +1은 넉넉한 공간을 확보하기 위해 더해줌.
    strcpy(ps, animal); // animal의 값을 ps에 복사하는 역할

    cout << "입력하신 동물 이름을 복사하였습니다." << endl;
    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다."  << endl;
    cout << "복사된 동물 이름은" << ps << "이고, 그 주소는 "<< (int*)ps << " 입니다." << endl;

    return 0;
}