#include <iostream>
using namespace std;

#include "exCircle.hpp"

int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은";
    cout << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적";
    cout << area << endl;
    
}