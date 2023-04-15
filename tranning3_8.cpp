#include "tranning3_8.h"
#include <string>

int main(){
    Integer n (30);
    cout << n.get() << ' '; // 30 
    n.set(50);
    cout << n.get() << ' '; 

    Integer m ("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}