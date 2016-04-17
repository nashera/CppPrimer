#include <iostream>
#include <vector>
using namespace std;
int main(){
    int ival = 1024, ival2 = 2048;
    int *pi = &ival, *pi2 = &ival2;
    pi = pi2;  // pi now points to ival2.
    int &ri = ival, &ri2 = ival2;
    ri = ri2;
    cout << "ival " << ival << endl;
    cout << "ival2 " << ival2 << endl;
    cout << "ri " << ri << endl;
    cout << "ri2 " << ri2 << endl;
    return 0;
}
