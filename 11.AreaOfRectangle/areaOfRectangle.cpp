#include<iostream>
using namespace std;
int AreaOfRectangle(int lenght, int width){
    return  lenght * width;
}
int main(){
    int area = AreaOfRectangle(8,5);
    cout<<"Your Rectangle Area is "<<area<<endl;
    return 0;
}