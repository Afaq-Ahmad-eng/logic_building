#include<iostream>
using namespace std;
void swapTwoNumberUsingBitwiseXOR(int &x, int &y){
    cout<<"Before swaping \n first value is "<<x<<" and second value is "<<y<<endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}
int main(){
    int a = 23, b = 13;
    swapTwoNumberUsingBitwiseXOR(a,b);
    cout<<"After swaping \n first value is "<<a<<" and second value is "<<b<<endl;
    return 0;
}