#ifndef FAMILY
#include <iostream>

using namespace std;

class Family{
    Person *p; // 펄슨 배열 포인터
    int size; // 펄슨 배열의 크기, 가족 구성원 수 생성.
private:
    /* data */
public:
    Family(string name,int size); // size개수만큼 Person 배열 동적 생성
    void show(); // 모든 가족 구성원 출력
    void setName();
    ~Family();
};

Family::Family(string name, int size)
{
    p = new Person[size];
    this -> familyName = name;
    this -> size = size
}

// 가족 구성원 출력
void Family::show(){
    cout << familyName << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << '\t';
	}
	cout << endl;

}
void Family::setName(int index, string name){
    p[index].setName(name);
}

// 소멸자 
Family::~Family(){
    	delete [] p;
}



#endif // FAMILY