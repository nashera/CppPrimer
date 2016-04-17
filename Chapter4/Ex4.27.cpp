#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int *pa = new int[10];
    delete [] pa;
    return 0;
}
