#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int a = 17;
    int *pa = &a;
    *pa = 89;
    cout << a << endl;
    return 0;
}
