#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    cout<<((x>0)?"Positive":(x<0?"Negative":"Zero"));
    return 0;

}