#ifndef INTEGER
#define INTEGER

#include <iostream>
#include <cstring>
using namespace std;

class Integer
{
private:
    int num;
public:
    Integer(int num);
    Integer(string num)
    int get();
    void set();
    int isEven();
    ~Integer();
};

Integer::Integer(int num){
    this -> num= num;
}
Integer::Integer(string num){
    this -> num= stoi(num);
}
int Integer::get(){
    return num;
}
void Integer::set(){
    this -> num =num;
}
int Integer::isEven(){
    return true;    
}
Integer::~Integer()
{
}



#endif