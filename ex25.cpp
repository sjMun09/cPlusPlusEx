#include <iostream>

using namespace std;
const int SIZE =30;

int main(){

    cout << " 문장을 입력" << endl;
    char line[SIZE];
    cin.get(line,SIZE);
    cout << "입력하신 문장은\n";
    int spaces =0;
    // 개행 문자를 받기 전까지 반복 
    for (int i=0; line[i]!='\0';i++){
        cout << line[i];

        //만약 공백 입력시 spaces 늘어나지 않고 반복문으로 돌아감.
        if (line[i] != ' ')
            continue;
        
        spaces++;
    }
    cout << "입니다.\n";
    cout << "입력하신 문장에서 공백을 제외한 문자 수는" << spaces << "개 입니다.\n";
    cout << "while문 종료" << endl;

    return 0;
}