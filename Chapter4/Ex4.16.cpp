#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    int i = 42, j = 1024;
    int *p1 = &i, *p2 = &j; 
    *p2 = *p1 * *p2; // j = i * j;
    *p1 *= *p1; // i *= i;
    cout << "i= " << *p1 << endl;
    cout << "j= " << *p2 << endl;
    return 0;
}
