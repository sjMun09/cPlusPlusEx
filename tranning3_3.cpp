#include "tranning3_3.h"

int main(){
    Account a("kitae",1,5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
    
}