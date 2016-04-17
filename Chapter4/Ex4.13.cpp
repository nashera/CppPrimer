#include <iostream>
#include <vector>
#include <string>
using namespace std;
int  main(){
    int i = 42;
    void *p = &i; //because a pointer of void type can pointer any type of object
    long *lp = &i; // illegal
    return 0;
                      
}
