#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int* ip; //legal but misleading
    string s, *sp = 0; //legal
    int a = 10, b = 19; // legal
//    int i; double* dp = &i;//illegal  cannot assigned a integer pointer to a double type pointer.
//    const int i = 0, *p = i; // illegal
    string *p = NULL; //legal

    cout << a << b << endl;
    return 0;
}
