#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
    char pound_sym = 156;
    float pounds, shillings, pence;
    cout<<"Enter pounds: "<<endl;
    cin>>pounds;
    cout<<"Enter shillings: "<<endl;
    cin>>shillings;
    cout<<"Enter pence: "<<endl;
    cin>>pence;
    shillings += pence/12;
    pounds += shillings/20;

    cout<<"Decimal pounds = "<<pound_sym<<pounds<<endl;

    return 0;
}
