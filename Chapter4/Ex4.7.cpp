#include <iostream>
#include <vector>
using namespace std;

int main(){
    const size_t array_size = 5;
    int ia1[array_size] = {1, 2, 3, 4, 5};
    int ia2[array_size];
    for(size_t ix = 0; ix != array_size; ++ix){
        ia1[ix] = ia2[ix];
    }

    vector<int> ivec1 = {6, 7, 8,  9, 10};
    vector<int> ivec2(ivec1);
    for(auto itr = ivec2.begin(); itr != ivec2.end(); ++itr){
        cout << *itr << endl;
    }
    return 0;
}
