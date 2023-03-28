#include <iostream>

using namespace std;

class Stock
{
private:
    string name;
    int shares;
    float share_val;
    double total_val;
    // 자동으로 총 가격을 계산해주는 기능의 함수를 하나 만들기 
    void set_total(){total_val = shares * share_val;}
public:
    void acquire(string, int, float);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock(/* args */);
    ~Stock();
};

void Stock::acquire(string co, int n, float pr){
    name =co;
    shares = n;
    share_val =pr;
    set_total();
}
void Stock::buy(int n,float pr){
    shares +=n;
    share_val =pr;
    set_total();
}
void Stock::sell(int n,float pr){
    shares -= n;
    share_val =pr;
    set_total();
}
void Stock::update(float pr){
    share_val =pr;
    set_total();
}
void Stock::show(){
    cout << "회사 명 : " << name <<endl;
    cout << "주식 수 : " << shares <<endl;
    cout << "주가 : " << share_val <<endl;
    cout << "주식 총 가치 : " << total_val <<endl;
}
Stock::Stock(/* args */)
{
}

Stock::~Stock()
{
}
//이제 위에 작성했던 클래스 객체를 직접 생성하고, 사용하기
int main(){
    Stock temp;
    // temp 에 관한 멤버함수를 호출해주기 위해서 멤버 연산자인 " . "을 사용해줌
    temp.acquire("HMM",100 ,1000);
    temp.show();
    temp.buy(10,1200);
    temp.show();
    temp.sell(5,800);
    temp.show();

    return 0;
}