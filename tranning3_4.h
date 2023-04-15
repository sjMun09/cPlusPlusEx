#ifndef CoffeeMachine
#define CoffeeMachine

#include <iostream>

using namespace std;

class CoffeeMachine
{
private:
    int coffee;
    int water;
    int sugar;
public:
    CoffeeMachine(int c, int w, int s);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void show();
    void fill();
    ~CoffeeMachine();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s){
    coffee = c;
    water = w;
    sugar = s;
}
void CoffeeMachine::drinkEspresso(){
    coffee -= 1;
    water -=1;
}
void CoffeeMachine::drinkAmericano(){
    coffee -=1;
    water -=2;
}
void CoffeeMachine::drinkSugarCoffe(){
    coffee -=1;
    water -=2;
    sugar -=1;
}
void CoffeeMachine::show(){
    cout << "커피 머신 상태, 커피:" << coffee << "물 : "<< water <<"설탕 : "<<sugar << endl;
}
void CoffeeMachine::fill(){
    water= coffee = sugar =10;
}

CoffeeMachine::~CoffeeMachine()
{
}




#endif 