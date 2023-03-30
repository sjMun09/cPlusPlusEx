#include <iostream>
using namespace std;

class Add{
    int a;
    int b;
    //접근할 수 있게
public:
    void setValue(int x, int y);
    int calculate();
};
// Add 클래스의 public의 setValue 대입
void Add::setValue(int x,int y){
    a =x;
    b= y;
}
class Sub{

};
class Mul{

};
class Div{

};

int main(){
    Add a;
    Sub s;
    Mul m;
    Div d;

    int num1,num2;
    char c;
    cin >> num1 >> num2 >> c;
    
    while(true){
    switch(c){
        case '+': a.
        case '-': 
        case '*': 
        default : 
    }
    }
    return 0;
}