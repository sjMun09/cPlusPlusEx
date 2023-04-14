#ifndef TOWER
#define TOWER

#include <iostream>
using namespace std;

class Tower{
    int height;
public:
    //객체 두개 생성했으니까, 생성자도 두개 마들어줌
    Tower();
    Tower(int h);
    int getHeight();
    ~Tower();
};

Tower::Tower(/* args */){
    int height =1;
}
Tower::Tower(int h){
    height = h;
}
int Tower::getHeight(int h){
    return height;
}

Tower::~Tower()
{
}



#endif 