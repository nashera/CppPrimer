#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    double a = -39 * 3 + 21 / 5;
    double b = -30 + 3 * 21 / 5;
    double c = 30 / 3 * 21 % 5;
    double d = -30 / 3 * 21 * 4; // machine-dependent
    cout << a << " " << b << " " << c <<  " " << d << endl;
    return 0;
}
