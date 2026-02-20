#include<iostream>
using namespace std;
int main() {
    float celsius;
    cout<<"Enter temperature in Celsius: ";
    cin>>celsius;
    float farenheit  = celsius * 9 / 5 + 32;
    cout<<"Temperature in Farenheit: "<<farenheit<<endl;
    return 0;
}