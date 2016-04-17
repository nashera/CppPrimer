#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
    int ia[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    typedef int int_array[4];
    int_array *ip = ia;
    for(int_array *p = ia; p != ia + 3; ++p)
        for(int *q = *p; q != *p + 4; ++q)
            cout << *q << endl;



    for(size_t ix = 0; ix != 3; ++ix){
        for(size_t iy = 0; iy != 4; ++iy){
            cout << *(*(ia + ix) + iy) << endl;
        }
    }
    return 0;
}
