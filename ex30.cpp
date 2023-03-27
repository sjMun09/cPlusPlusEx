#include <iostream>

using namespace std;
struct Time{
    int h;
    int min;
};
// 함수의 원형제공 
const int minPerHr = 60;

Time sum(Time*, Time*);

void showTime(Time t1);

int main(){

    // 함수는 원본이 아닌 복사본을 대상으로 작업합니다.
    // 구조체를 값으로 전달할 때는 단점이 있음. -> 메모리 용량이 커져서 낭비 심함. -> 그래서 포인터 사용하게 됨.
    
    Time day1 = {5,45};
    Time day2 = {4,55};

    Time total = sum(&day1, &day2);

    cout << "이틀간 소요 시간 : ";
    showTime(total);

    return 0;
}

// 구조체 + 구조체 = 구조체 구현
Time sum(Time* t1, Time* t2){
    Time total;

    // 구조체가 아니라 구조체에 대한 포인터가 매개변수임으로, " . " 사용해서는 절대 안됨.
    // 구조체의 주소에 대하여서 그 멤버에 접근하고 싶을 때에는 무조건 간접 멤버연산자인 " -> " 을 사용해줘야합니다.
    // 즉, " . " : 구조체의 값에서 멤버접근
    // " -> " : 구조체의 주소에서 멤버 접근
    total.min = (t1->min + t2->min)% minPerHr;
    total.h = t1 -> h + t2 -> h + 
            (t1->min + t2->min)/minPerHr;

    return total;
}
// 구조체의 값을 매개변수로 받음.
void showTime(Time t1){
    cout << t1.h << "시간 ," << t1.min << "분 입니다." << endl;
}