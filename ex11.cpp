#include <iostream>

using namespace std;

int main(){

    char char1[20];
    char char2[20]= "jaguar";
    string str1;
    string str2= "panda";

    // char1= char2; //틀림.
    str1 = str2; //가능함. -> 복합데이터 string의 장점.

    cout << str1[0] << endl;
    return 0;
}