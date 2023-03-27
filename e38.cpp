#include <iostream>

using namespace std;

template <class Any>
Any sum(Any , Any);
template <class Any>
Any sum(int , Any);

int main(){

    int a = 3;
    int b =4;
    // cout << sum(a,b) << endl; //첫 번째와 두 번째 sum 둘다 매칭되기 때문에 사용할 수 없음

    float c =3.14;
    float d= 1.1231;
    cout << sum (c,d)<< endl;
    cout << sum(a,c) << endl;
    
    return 0;
}
template <class Any>
Any sum(Any a, Any b){
    return a+b;
}
template <class Any>
Any sum(int a, Any b){
    return a+b;
}