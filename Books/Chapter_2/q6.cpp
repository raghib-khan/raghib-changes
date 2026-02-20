#include<iostream>
using namespace std;
int main() {
    float dollars, d2g = 1/0.584, d2f = 1/0.172, d2j = 1/0.00955, d2b = 1/1.487;
    cout<<"Enter amount in dollars: ";
    cin>>dollars;
    cout<<"Equivalent Pounds: "<<dollars * d2b<<endl;
    cout<<"Equivalent France: "<<dollars * d2f<<endl;
    cout<<"Equivalent Yen: "<<dollars * d2j<<endl;
    cout<<"Equivalent Deutschemark: "<<dollars * d2g<<endl;
    return 0;
}