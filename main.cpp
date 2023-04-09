#include "struct.hpp"

int main(){

    Mystruct Coding ={
        "Seongjun",
        27,
    }; // 이 구조체가 위의 Mystruct 의 string 이름과 나이에 대입됨

    display(Coding); // 여기서 아래 display에 코딩을 매개변수로 넣어줌
    return 0;
}

void display(Mystruct& temp){
    cout << "이름 : " << temp.name << endl;
    cout << "나이 : " << temp.age << endl;
}