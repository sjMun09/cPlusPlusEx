#include <iostream>

using namespace std;

class Person{
    string name;
    string tel;
public:
    Person();
    string getName(){
        return name;
    }
    string getTel(){
        return tel;
    }
    void set(string name, string tel);
};
Person::Person(){

}
void Person::set(string name, string tel){
    this -> name = name;
    this -> tel = tel;
}

int main(){
    string name, tel;
    Person personArray[3];
    cout << "이름과 전화 번호를 입력해 주세요\n";
    
    // 배열의 길이가 length 가 아님. size() 임
    for (int i = 0; i < 3; i++)
    {
        cout << "사람" << i +1 << ">>";
        cin >> name >> tel;
        personArray[i].set(name,tel);
    }
    cout << "모든 사람의 이름은";
    for (int i = 0; i < 3; i++)
    {
        cout << personArray[i].getName()<< ' ';
    }
    cout << endl;

    cout << "전화번호 검색합니다. 이름을 입력하세요 >>";
    cin >> name;

    for (int i = 0; i < 3; i++)
    {
        if (name.compare(personArray[i].getName())==0){
            cout << "전화 번호는" << personArray[i].getTel()<<endl;
            break;
        }
        
        
    }
    

    return 0;
}