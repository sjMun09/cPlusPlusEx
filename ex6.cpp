#include <iostream>
/* c에서 상수 선언 
#define PIE 3141592
*/

using namespace std;

int main(){

    // 원의 넓이를 구하는 프로그램
    float r = 3.14;
    float sum = r*r*r;

    /* c++ 에서 상수 선언 
    const float PIE = 3.1415;
    */    

    int r2 = 3;
    float s = r2*r2*3.14;
    
    cout << sum << endl;
    cout << s << endl;


    return 0;
}