#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    unsigned long ul1 = 3, ul2 = 7;
    unsigned long ul3, ul4;
    ul3 = ul1 & ul2;
    ul4 = ul1 | ul2;
    cout << ul3 << " " << ul4  << " " << (ul1 && ul2) <<  " " << (ul1 || ul2) << endl;
    return 0;
    
}
