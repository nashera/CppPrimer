#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 5, 5, 6, 6, 7};
    vector<int> ivec(a + 1, a + 4);
    for(auto itr = ivec.begin(); itr != ivec.end(); ++itr){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
/
