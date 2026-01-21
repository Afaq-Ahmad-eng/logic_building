#include<iostream>
using namespace std;
float celsiusToFahrenheit(float celsius){
    return (((9/5.0) * celsius) + 32);
}

int main(){
    float celsius = 25;
    cout<<celsius<<" "<<char(248)<<"C converted to Fahrenheit = "<<celsiusToFahrenheit(celsius)<<" "<<char(248)<<"F"<<endl;
    return 0;
}