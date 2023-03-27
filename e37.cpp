#include <iostream>

using namespace std;

template <class T>
T sum(int , T);

int main(){

    int a = 3;
    float c = 3.14;
    cout << sum(a,c) << endl;

    return 0;
}
template <class T>
T sum(int a, T b){
    return a+b;
}