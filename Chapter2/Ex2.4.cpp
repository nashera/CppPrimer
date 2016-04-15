#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int assum = 100000 - pow(2, 16);
    unsigned short test = 100000; // cannot assign
    cout  << "assum " << assum << endl;
    cout << "test " << test << endl;
    return 0;
     
}
