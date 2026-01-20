#include<iostream>
using namespace std;
int leapYear(int year){
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
int main(){
    int year = 2401;
    if(leapYear(year))
    cout<<year<<" year is a leap year ";
    else
    cout<<year<<" year is not a leap year";
    return 0;
}