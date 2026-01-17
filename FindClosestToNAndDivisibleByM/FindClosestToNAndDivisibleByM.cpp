#include<iostream>
#include<climits>
using namespace std;
int FindClosestToNAndDivisibleByM(int n, int m){
    if(m == 0){
        cout<<"Divisor must be greater then 1!"<<endl;
        return 0;
    }else{
        int quotient = n / m;
        //Lower closest number
        int LowerClosestNo = quotient * m;

        //Higher CLosest number 
        int HigherClosestNo = (n * m) > 0 ? (m * (quotient + 1)) : (m * (quotient -1));
        //if the condition is true then return the Lower Closest number
        if(abs(n - LowerClosestNo)< abs(n - HigherClosestNo)) return LowerClosestNo;

        //else Higher closest number
        return HigherClosestNo;
    }
}

int main(){
    int a = 29, b = -3;
    int result = FindClosestToNAndDivisibleByM(a,b);
    cout<<result;
    return 0;
}