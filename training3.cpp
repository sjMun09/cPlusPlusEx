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
        b =y ;
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
        
        if (index =='+'){
            a.setValue(n1,n2);
            cout << a.calculate()<< endl;
        }else if (index =='-'){
            s.setValue (n1,n2);
            cout << s.calculate() << endl;
        }else if(index=='*'){
            m.setValue(n1,n2);
            cout << m.calculate() << endl;
        }else if(index == '/'){
            d.setValue(n1,n2);
            cout << d.calculate() << endl;
        }else continue;
        
    }
    return 0;
}