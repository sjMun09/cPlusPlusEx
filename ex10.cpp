#include <iostream>
#include <cstring>

using namespace std;

int main(){

    const int Size = 15; 
    char name1[Size]; // 비어있는 배열
    char name2[Size] = "C++Programaing"; // 문자열 상수로 초기화

    cout << "안녕하세요. 저는 " << name2;
    cout << "입니다 ! 성함이 어떻게 되십니까?\n";
    cin >> name1;
    cout << "음, " << name1 << "씨, 당신의 이름은";
    cout << strlen(name1) << " 자입니다만\n";
    cout << sizeof(name1) << "바이트 크기의 배열로 저장되었습니다.\n";
    cout << "이름이" << name1[0] << "자로 시작하시는군요.\n";
    name2 [3]='\0';  // \0 을 넣어줌으로써 문자열이 끝남을 알림.
    cout << "제 이름의 처음 세 문자는 : ";
    cout << name2 << endl;


    return 0;
}