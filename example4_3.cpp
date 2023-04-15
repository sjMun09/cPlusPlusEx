#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(){
        radius =1;
    }
    Circle(int r){
        radius =r;
    }
    void setRadius(int r){
        radius = r;
    }
    double getArea();
    ~Circle();
};

Circle::Circle(/* args */)
{
}
double Circle::getArea(){
    return 3.14 * radius * radius;
}
Circle::~Circle()
{
}


int main(){
    Circle circleArray[3] ={
        Circle(10), Circle(20), Circle()
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "Circle"<<i<<"의 면적은" << circleArray[i].getArea() << endl;
    }
    

    return 0;
}