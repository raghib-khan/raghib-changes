#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
    char char_in;
    cout<<"Enter a character: "<<endl;
    cin>>char_in;
    int result = islower(char_in);
    cout<<result<<endl;

    return 0;
}
