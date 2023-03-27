#include <iostream>

using namespace std;

struct ex12{
        string name;
        string position;
        int height;
        int weight;
} B;


int main(){
    // 1번 방식 , 멤버연산자 사용해서 각각 입력
    // ex12 A;
    // A.name = "Son"; // 변수명.ㅇㅇ 방식으로 접근할 수 있음    
    // A.position = "WorldClass";
    
    // 2번 방식
    ex12 A = {"Son","WorldClass",183,73};

    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    // 모든 값을 대입할 필요는 없음. 빈 값은 0으로 대입됨
    B = {

    };
    cout << "B struct " << B.height << endl;


    // 구조체 배열
    ex12 C[2]={
        {"A","A",1,1},
        {"B","B",2,2}
    };
    cout << C[1].height << endl;

    return 0;
}