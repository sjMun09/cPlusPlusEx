#include <iostream>

using namespace std;

int main(){

    int a[5] = {1,3,5,7,9};

    for ( int i = 0; i < 5; i++){
        cout << a[i];
    }
    cout << "\n";
    cout << "강화 for문" << "\n";
    for(int i : a){ 
        cout << i;
    }
    return 0;
}