#include<iostream>
using namespace std;
int nthTermOfAPFromFirstTwoTerms(int num, int num1, int n){
    return num + (n - 1) * (num1 - num);
}

int main(){
    int a = 2, b = 3, c = 4;
    cout<<"Nth Term of AP is : "<<nthTermOfAPFromFirstTwoTerms(a, b, c);
    return 0;
}