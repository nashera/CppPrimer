#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int i = -1; // legal
    const int ic = i; //legal
    const int *pic = &ic; //legal
//    int *const cpi = &ic; // illegal
        //  const int *const cpic  = &ic; // illegal
    return 0;
    
}
