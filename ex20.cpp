#include <iostream>

using namespace std;

int main(){

    string str ="Panda"; //개행 문자를 포함하고 있음.
    int i=0;
    // null 문자가 아닐 때 동안 반복함 - > 자바로는 while (st.hasMoreTokens()) 라고 보면 될듯.
    while (str[i] !='\0'){

        cout << str[i] << endl;
        i++;
    }

    return 0;
}