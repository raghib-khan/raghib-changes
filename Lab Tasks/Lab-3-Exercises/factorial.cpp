#include <iostream>
using namespace std;
int main() {
    int x, fact = 1;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    for (int i =  2; i <=x; i++) {
        fact *= i;
    }
    cout<<"Factorial is: "<<fact<<endl;
    return 0;

}