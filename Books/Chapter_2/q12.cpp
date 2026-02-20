#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
    char pound_sym = 156;
    float decpounds;
    cout<<"Enter Decimal Pounds: "<<endl;
    cin>>decpounds;

    int pounds = decpounds;
    float decfrac = decpounds - pounds;
    int shillings = decfrac * 20;
    decfrac = decfrac * 20 - shillings;
    int pence = decfrac * 12;

    cout<<"Equivalent in old notation = "<<pound_sym<<pounds<<"."<<shillings<<"."<<pence<<endl;

    return 0;
}
