#include <iostream>

using namespace std;

int main(){
    // 열거체 enum
    // 열거체에 정수를 대입할 수 있음. 즉, red =0, orange= 2, 이렇게 대입하고 나면 yellow 는 3이됨.
    // 이유 : +1씩 해주기 때문 = > 열거체 특성.
    enum spectrum {red,orange, yellow, green, blue, violet, indigo, ultraviolet};
    /*
    1. spectrum을 새로운 데이터형 이름으로 만듭니다.
    2. spectrum 에서 정의된 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듭니다.
    -> 즉, spectrum에 있는 red 는 0 , orange 는 1 ... (이런식)
    */
    // 열거체에서 특징이 사용된 열거자들을 상수로서(기호상수) 관리 해야하기 때문에, 산술연산 적용 불가능. 
    // EX) spectrum a = orange + yellow; 이건 불가능.
    spectrum a = orange;
    cout << a << endl;

    int b;
    b = blue;
    b = blue + 3; // int형 변수에 값을 대입하고자 할때는, 열거자들의 값은 int형 정수자로 계산됨, 이떄 blue 는 4를 가지고 있기 때문에
    cout << b << endl; 

    return 0;
}