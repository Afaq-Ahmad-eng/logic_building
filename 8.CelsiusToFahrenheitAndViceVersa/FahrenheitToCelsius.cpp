#include<iostream>
using namespace std;
float FahrenheitTocelsius(float fahrenheit){
    return ((5.0/9.0) * (fahrenheit - 32));
}

int main(){
    float fahrenheit = 77;
    cout<<fahrenheit<<" "<<char(248)<<"F converted to Celsius = "<<FahrenheitTocelsius(fahrenheit)<<" "<<char(248)<<"C"<<endl;
    return 0;
}