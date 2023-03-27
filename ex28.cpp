#include <iostream>

using namespace std;

const int SIZE = 8;
//위에 이렇게 해줘야 아래 사용가능.
int sumArr(int[],int);

//배열의 요소 모두 출력
int main(){
    // arr은 배열이 아니라 포인터임. 
    int arr[SIZE]={1,2,4,6,7,8,772,992};
    // arr == &arr[0]
    int sum = sumArr(arr,SIZE);
    
    cout << "함수의 총합은 "<< sum << endl;
    return 0;
}
// c++에서 배열 이름을 그 배열의 첫번째 원소의 주소로 인식함.
// 즉 sumArr은 주소를 전달받게 되는것임.
int sumArr(int arr[],int n){
    int total=0;

    for (int i = 0; i < n; i++){
        total+=arr[i];
    }

    return total;
}