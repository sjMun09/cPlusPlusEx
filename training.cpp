#include <iostream>

using namespace std;

class Oval{
public:
    int width, height;
    Oval();
    //너비와 높이의 값을 매개변수로 받는 생성자
    Oval(int w,int h);
    ~Oval();
    double getWidth();
    double getHeight();
    void set(int w, int h);
    void show();

};
// 매개변수 없는 생성자
Oval::Oval(){
    width =1;
    height =1;
}
Oval::Oval(int w, int h){
    width = w;
    height =h;
}
// 소멸자
Oval::~Oval(){
    cout << "소멸자 :";
    show();
}
double Oval::getWidth(){
    return width;
}
double Oval::getHeight(){
    return height;
}
void Oval::set(int w, int h){
    width =w; height =h;
}
void Oval::show(){
    cout <<"widht = "<< width << ", height= " << height <<endl;
}

int main(){
    Oval a,b(3,4);
    a.set(10,20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}