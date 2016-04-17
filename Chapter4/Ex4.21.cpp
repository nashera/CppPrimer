#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int ic = 10;
    int i = ic;
//    int *pic = &ic;
//    const int *cpi = pic; // illegal
    int *const pic = cpic;  // legal
//    const int *const cpic = &ic; // illegal
    int const ic = *cpic; // legal
    return 0;
}
