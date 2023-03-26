#include <iostream>
#include <climits>

using namespace std;

int main() {
    // short, int, long, long long

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트입니다." << endl;
    cout << "최대값" << n_int << "." << endl;
    
    cout << "short는 " << sizeof n_short << "바이트입니다." << endl;
    cout << "최대값" << n_short << "." << endl;

    cout << "long는 " << sizeof n_long << "바이트입니다." << endl;
    cout << "최대값" << n_long << "." << endl;

    cout << "long long는 " << sizeof n_llong << "바이트입니다." << endl;
    cout << "최대값" << n_llong << "." << endl;

    return 0;
}