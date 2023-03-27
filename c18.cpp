#include <iostream>

using namespace std;

struct My{
    char name[20];
    int age;
};

int main(){

    My* temp = new My;

    cout << "당신의 이름을 입력하세요 \n";
    cin >> temp -> name;

    cout << "당신의 나이를 입력하세요 \n";
    cin >> (*temp).age; // -> 가 싫으면 이렇게 접근해도 됨.

    cout << "안녕하세요 ! " << temp -> name << "씨!\n";
    cout << "당신은 " << temp -> age << "살 이네여.";

    return 0;
}