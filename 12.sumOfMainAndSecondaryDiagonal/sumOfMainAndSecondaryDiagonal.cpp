#include<iostream>
using namespace std;
 int sumOfMainAndSecondaryDiagonalOf4By4Array(int arr[4][4]){
    int sum = 0;
    sum += arr[0][0];
    sum += arr[0][3];
    sum += arr[1][1];
    sum += arr[1][2];
    sum += arr[2][1];
    sum += arr[2][2];
    sum += arr[3][0];
    sum += arr[3][3];

    return sum;
 }

 int main(){
    int arr[4][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    cout<<sumOfMainAndSecondaryDiagonalOf4By4Array(arr);
    return 0;
 }