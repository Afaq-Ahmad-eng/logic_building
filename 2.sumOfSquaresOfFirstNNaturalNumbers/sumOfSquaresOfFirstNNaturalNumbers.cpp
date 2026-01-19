#include<iostream>
using namespace std;
int sumOfSquaresOfFirstNNaturalNumbers(int num){
    return (num * (num + 1)*(2*num + 1)/6);
}
int main(){
   cout<<sumOfSquaresOfFirstNNaturalNumbers(8);
    return 0;
} 
