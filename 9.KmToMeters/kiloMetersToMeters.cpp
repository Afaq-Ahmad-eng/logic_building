#include<iostream>
using namespace std;
float kiloMetersToMeters(float kilometers){
    return kilometers * 1000;
}
float metersToKiloMeters(float meters){
    return meters/1000;
}
int main(){
    float kilometers = 9.5;
    cout<<kilometers<<" km equals to "<<kiloMetersToMeters(kilometers)<<" meters"<<endl;
    cout<<kiloMetersToMeters(kilometers)<<" meters equals to "<<metersToKiloMeters(kiloMetersToMeters(kilometers))<<" km";
    return 0;
}