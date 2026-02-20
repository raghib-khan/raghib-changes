#include <iostream>
using namespace std;
int main () {
    const int x = 10;
    cout<<x<<endl;
    int y = x;
    y+= 10;
    cout<<y<<endl;
    --y;
    cout<<y<<endl;
    return 0;
}