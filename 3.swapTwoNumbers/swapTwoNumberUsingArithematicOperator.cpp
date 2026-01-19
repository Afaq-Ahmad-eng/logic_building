#include<iostream>
using namespace std;
//we create a function which return nothing and this function is use the reference operator
void swapTwoNumbersUsingArithematicOperator(int &x, int &y){
    cout<<"Before the swap \n first argument value is "<<x<<" and the second argument value is "<<y<<endl;
    x = x + y;
    y = x - y;
    x = x - y;
}

int main(){
    int a = 5 , b = 9;
    swapTwoNumbersUsingArithematicOperator(a,b);
    cout<<"After the swap \n first value is "<<a<<" and second value is "<<b<<endl;
    return 0;
}
