#ifndef ACCOUNT
#define ACCOUNT

#include <iostream>
#include <string>

using namespace std;

class ACCOUNT
{
private:
    string name;
    int id;
    int balance;
public:
    ACCOUNT(string a, int b, int c);
    string getOwner();
    void deposit(int a);
    int withdraw(int a);
    int inquiry();

    ~ACCOUNT();
};

ACCOUNT::ACCOUNT(string a, int b, int c){
    name = a;
    id = b;
    balance = c;
}
void ACCOUNT::deposit(int a){
    balance +=a;
}
int ACCOUNT::withdraw(int a ){
    balance -=a;
    return balance;
}
string ACCOUNT::getOwner(){
    return name;
}
int ACCOUNT::inquiry(){
    return balance;
}

ACCOUNT::~ACCOUNT()
{
}




#endif