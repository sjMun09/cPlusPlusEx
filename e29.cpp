#include <iostream>

using namespace std;

const int SIZE = 8;
//위에 이렇게 해줘야 아래 사용가능.
int sumArr(int*,int*);

//배열의 요소 모두 출력
int main(){
    // arr은 배열이 아니라 포인터임. 
    int arr[SIZE]={1,2,4,6,7,8,772,992};
    // arr == &arr[0]
    int sum = sumArr(arr,arr+SIZE);
    cout << "함수의" << SIZE << "까지의 합은 "<< sum << "입니다\n";

    sum=sumArr(arr,arr+3);
    cout<< "함수의 " <<"세 번째 인덱스 까지의 합은 " << sum << endl;
    return 0;
}

// 파라미터에 배열의 시작 주소, 배열의 사이즈 || 배열의 끝
int sumArr(int* begin,int* end){
    int total=0;
    int* pt;

    for (pt = begin; pt != end;pt++){
        total+= *pt;
    }

    return total;
}