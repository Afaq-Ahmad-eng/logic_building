#include<iostream>
using namespace std;
int sumOfNNaturalNumbers(int num){
    return (num * (num + 1) / 2);
}

int main(){
    int num = 0;
    cout<<"Enter a number of your choice\n";
    cin>>num;
    cout<<sumOfNNaturalNumbers(num);
    return 0;
}