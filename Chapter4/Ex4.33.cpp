#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    const size_t buf_size = 1024;
    int int_arr[buf_size];
    vector<int> ivec = {1, 2, 3, 4, 5, 5, 6, 7, 8, 10, 11};
    auto itr = ivec.begin();
    for(int *pi = int_arr; itr != ivec.end(); ++pi, ++itr){
        *pi = *itr;
    }

    for(size_t ix = 0; ix < ivec.size(); ++ix){
        cout << int_arr[ix] << " ";
    }
    cout << endl;
}
