#include <iostream>

using namespace std;


class Oval
{
public:
    int width, height;
    Oval();
    Oval(int a,int b);
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
    ~Oval();
};
// 너비와 높이가 같을 매개 변수로 받는 생성자
Oval::Oval(int a, int b){
    width = a; height = b;
}
// 너비와 높이 1로 초기화, 매개변수 x
Oval::Oval() {
    width = height =1;
}
// 타원의 너비를 리턴
int Oval::getWidth(){
    return width;
}
// 타원의 높이 리턴
int Oval::getHeight(){
    return height;
}
//타원의 너비와 높이를 변경
void Oval::set(int w, int h){
    width = w; height =h;
}
// 타원의 너비와 높이를 화면에 출력
void Oval::show(){
	cout << "width = " << width << ", height = " << height << endl;
}

//  소멸자
Oval::~Oval()
{
    cout << "Oval 소멸 : width = " << width << ", height = " << height <<endl;
}


int main(){

    Oval a,b(3,4);
    a.set(10,20);
    a.show();
    cout<< b.getWidth() << "," << b.getHeight() <<endl;

    return 0;
}