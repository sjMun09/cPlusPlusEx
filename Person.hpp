#ifndef PERSON
#include <iostream>

using namespace std;

class Person
{
private:
    /* data */
public:
    Person(string name){
        tihs-> name = name;
    };
    string getName(){
        return name;
    }
    ~Person();
};
// 생성자인데 위 이 초기화 했고, 설명했기 때문에 추가할 필요 없음.
Person::Person(/* args */)
{
}

//소멸자 
Person::~Person()
{
}



#endif // PERSON