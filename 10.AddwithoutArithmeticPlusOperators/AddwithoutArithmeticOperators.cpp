#include<iostream>
using namespace std;
void AddwithoutArithmeticOperators(int &num, int &num1){
    int a = num, b = num1;
    while(num1--){
        num++;
    }
    cout<<a <<" + "<<b<<" = "<<num;
}

void AddNotUsingPlusOperators(int num, int num1){
    int sum = num - (-num1);
    cout<<num<<" + "<<num1<<" = "<<sum<<endl;
}

int main(){
    int a = 5, b = 7;
    AddNotUsingPlusOperators(a,b);
    AddwithoutArithmeticOperators(a,b); 
    return 0;
}