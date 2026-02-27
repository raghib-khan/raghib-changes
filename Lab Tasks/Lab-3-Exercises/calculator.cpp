#include <iostream>
using namespace std;
struct fraction {
    int num;
    int den;
};

int main() {
    fraction f1, f2, result;
    char slash, oper, choice;
    
    do{
        cout<<"Enter the first fraction, operator and the second fraction: 1/2 + 1/2"<<endl;
        cin>>f1.num>>slash>>f1.den>>oper>>f2.num>>slash>>f2.den;
        switch (oper) {
            case '+':
                result.num = f1.num * f2.den + f2.num * f1.den;
                result.den = f1.den * f2.den;
                break;
            case '-':
                result.num = f1.num * f2.den - f2.num * f1.den;
                result.den = f1.den * f2.den;
                break;
            case '*':
                result.num = f1.num * f2.num;
                result.den = f1.den * f2.den;
                break;
            case '/':
                result.num = f1.num * f2.den;
                result.den = f1.den * f2.num;
                break;
            default:
                cout<<"Invalid Oper"<<endl;
                oper = 'X';
                break;
        }
        if (oper != 'X')
            cout<<"Result is : "<<result.num<< " / "<< result.den<<endl;
        cout<< "Enter y to continue or n to exit"<<endl;
        cin >>  choice;
    }
while (choice == 'y');


    return 0;

}