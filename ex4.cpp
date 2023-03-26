#include <iostream>

using namespace std;

int main(){

    // char : 작은 문자형
    char b = 'a'; // char= "a" 로 작성하면 'a' + '\0' 을 포함하게된 것이라서 char을 사용하지 못함.
    // null 문자 '\0'을 꼭 작성해줘야함 그래야지 여기까지 내가 출력하는구나 를 인지할 수 있음.
    // '\0' 을 만나면 여기까지만 출력해야겠구나 라고 인지함
    // 즉, '\0'은 null 문자를 나타내며, 문자열의 끝을 나타내며, 표시하는 용도로 쓰임.
    // 계속 null을 쓰긴 귀찮으니까 문자열을 " "로 감싸주게 된다면, 명시적으로 null 문자가 포함됨. -> string
    char a[] = {'a','b','c', '\0'};

    cout << b << endl;
    cout << a << endl;


    return 0 ;
}