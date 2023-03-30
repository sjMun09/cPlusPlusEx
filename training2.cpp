#include <iostream>
#include <string>

using namespace std;

int a,b;
int n1,n2;

class Add{
public:

    void setValue(int x, int y){
        a = x;
        b = y;
    }
    int calculate(){
        return a+b;
    }
};
class Sub{
public:
    void setValue(int x, int y){
        a =x ;
        b =y;
    }
    int calculate(){
        return a-b;
    }

};
class Mul{
public:
    void setValue(int x, int y ){
        a =x ;
        a =y ;
    }
    int calculate(){
        return a*b;
    }

};
class Div{
public: 
    void setValue(int x, int y){
        a =x;
        b =y;
    }
    int calculate(){
        return a/b;
    }

};


int main(){
    
    Add a;
    Sub s;
    Mul m;
    Div d;
    // 프로그램은 무한루프를 돌아야함.
    while (true){
        cout << "두 정수와 연산자를 입력하세요>>\n";
        // 산술연산의 부호를 index로 받을예정임.
        char index;
        cin >> n1 >> n2 >> index;
        
        switch (index){
        case '+': 
        // 각 경우마다 클래스를 세팅해줘야함. (경우의 수 마다 각각 )
            a.setValue(n1,n2);
            cout << a.calculate() << endl;
            break;
        case '-':
            s.setValue(n1,n2);
            cout << s.calculate()<< endl;
        case '*':
            m.setValue(n1,n2);
            cout << m.calculate() <<endl;
        case '/':
            d.setValue(n1,n2);
            cout << d.calculate() <<endl;
        default:
            break;
        }
    }
    return 0;
}