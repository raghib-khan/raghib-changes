#include <iostream>
#include <cmath>
using namespace std;
struct point {
    int x;
    int y;
};
int main() {
    point sp, ep;
    int t1, t2;
    float length;
    char temp;
    cout<<"Enter the start point coordinates: "<<endl; // (0,0)
    cin>>temp>>sp.x>>temp>>sp.y>>temp;
    cout<<"Enter the end point coordinates: "<<endl; // (0,0)
    cin>>temp>>ep.x>>temp>>ep.y>>temp;
    t1 = pow(sp.x - ep.x, 2);
    t2 = pow(sp.y - ep.y, 2);
    length = sqrt(t1+t2);
    cout<<"Length is: "<<length<<endl;
    return 0;

}