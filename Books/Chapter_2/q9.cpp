#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
    char slash;
    int a,b,c,d, r_num, r_den;

    cout<<"Enter First Fraction: "<<endl;
    cin>>a>>slash>>b;
    cout<<"Enter Second Fraction: "<<endl;
    cin>>c>>slash>>d;
    r_num = a*d+b*c;
    r_den = b*d;
    cout<<r_num<<"/"<<r_den<<endl;


    return 0;
}
