#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec = {1, 2, 3, 5, 8, 13, 21};
    bitset<32> bitvec;
    for(auto iter = ivec.begin(); iter != ivec.end(); ++iter){
        bitvec.set(*iter);
    }
    for(auto index = 0; index != 32; index++){
        cout << bitvec[index] << " ";
    }
    
    cout << endl;
}
