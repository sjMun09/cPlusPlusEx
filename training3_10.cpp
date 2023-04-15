#include <iostream>

using namespace std;
class Add
{
private:
    int a,b;
public:
    Add(/* args */);
    void setValue(int x, int y);
    int calculate();
    ~Add();
};

Add::Add(/* args */){

}
void Add::setValue(int x, int y){
    a = x;
    b = y;
}
int Add::calculate(){
    return a+b;
}
Add::~Add()
{
}
class Sub
{
private:
    int a,b;
public:
    Sub(/* args */);
    void setValue(int x, int y);
    int calculate();
    ~Sub();
};

Sub::Sub(/* args */)
{
}
void Sub::setValue(int x, int y){
    a = x;
    b = y;
}
int Sub::calculate(){
    return a-b;
}
Sub::~Sub()
{
}
class Mul
{
private:
    int a,b;
public:
    Mul(/* args */);
    void setValue(int x, int y);
    int calculate();
    ~Mul();
};

Mul::Mul(/* args */)
{
}
void Mul::setValue(int x, int y){
    a = x;
    b = y;
}
int Mul::calculate(){
    return a * b;
}
Mul::~Mul()
{
}
class Div
{
private:
    int a,b;
public:
    Div(/* args */);
    void setValue(int x, int y);
    int calculate();
    ~Div();
};

Div::Div(/* args */)
{
}
void Div::setValue(int x, int y){
    a = x;
    b = y;
}
int Div::calculate(){
    return a/b;
}
Div::~Div()
{
}

int main(){
    Add a;
    Sub s;
    Mul m;
    Div d;

    int n1,n2;
    char ch;
    while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> n1 >> n2 >> ch;
		switch (ch) {
		case '+':
			a.setValue(num1, num2);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(num1, num2);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(num1, num2);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(num1, num2);
			cout << d.calculate() << endl;
			break;
		}
	}

	return 0;
}