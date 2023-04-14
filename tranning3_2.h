#ifndef DATE
#define DATE

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class DATE
{
private:
    int year;
    int month;
    int day;
public:
    DATE(int y,int m, int d);
    DATE(string strDate)
    void show();
    int getYear();
    int getMonth();
    int getDay();
    ~DATE();
};

DATE::DATE(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}
Date::Date(string str){
	year = stoi(str);
	month = stoi(str.substr(5,6));
	day = stoi(str.substr(7,9));
}
void DATE::show(){
    cout << year <<" 년 " << month << "월" << day << "일" << endl;
}
int DATE::getYear(){
    return year;
}
int DATE::getMonth(){
    return month;
}
int DATE::getDay(){
    return day;
}

DATE::~DATE()
{
}



#endif