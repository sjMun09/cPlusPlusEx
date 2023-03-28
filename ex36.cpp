#include <iostream>

using namespace std;

struct Mystruct{  //구조체
    string name;
    int age;
};

void display(Mystruct&); //함수의 원형

int main(){

    Mystruct Coding ={
        "Seongjun",
        27,
    };

    display(Coding);
    return 0;
}

void display(Mystruct& temp){
    cout << "이름 : " << temp.name << endl;
    cout << "나이 : " << temp.age << endl;
}