#include<iostream>
#include<iomanip>

using namespace std;
int main() {
    char c1 = 12, c2 = 13, c3 = 18, c4 = 11, c5 = 5;
    cout << setiosflags(ios::left);
    cout<<setw(c1)<<"Last Name"<<setw(c2)<<"First Name"<<setw(c3)<<"Street address"<<setw(c4)<<"Town"<<setw(c5)<<"State"<<endl;
    cout<<setw(c1)<<"Jones"<<setw(c2)<<"Bernard"<<setw(c3)<<"109 Pine Lane"<<setw(c4)<<"Littletown"<<setw(c5)<<"MI"<<endl;
    cout<<setw(c1)<<"O'Brian"<<setw(c2)<<"Coleen"<<setw(c3)<<"42 E. 99th Ave."<<setw(c4)<<"Bigcity"<<setw(c5)<<"NY"<<endl;
    cout<<setw(c1)<<"Wong"<<setw(c2)<<"Harry"<<setw(c3)<<"121-A Alabama St."<<setw(c4)<<"Lakeville"<<setw(c5)<<"IL"<<endl;

    return 0;
}
