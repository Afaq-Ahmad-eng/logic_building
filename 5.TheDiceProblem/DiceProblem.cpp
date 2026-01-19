#include<iostream>
using namespace std;
int oppositeSideOfDice(int n){
    return (7 - n);
}

int main(){
    int a = 4;
    if(a <= 0 || a > 6) cout<<"In the Cubic dice only 6 faces"<<endl;
    else cout<<"In the cubic dice the "<<a<<" opposite is "<<oppositeSideOfDice(a)<<endl;
    return 0;
}