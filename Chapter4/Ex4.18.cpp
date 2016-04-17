#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    const size_t array_sz = 5;
    int int_arr[array_sz] = {0, 1, 2, 3, 4};
    for (int *pb = int_arr, *pend = int_arr + array_sz; pb != pend; ++ pb){
        *pb = 0;
    }
    for(size_t ix = 0; ix < array_sz; ++ix){
        cout << int_arr[ix] << endl;
    }
    return 0;
    
}
