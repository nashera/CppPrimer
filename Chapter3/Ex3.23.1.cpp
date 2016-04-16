#include <iostream>
#include <bitset>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    bitset<8> bs((long)131);
    for(int i = 0; i <= bs.size(); i++){
        cout << bs[i] << " ";
    }
    cout << endl;
    for(int i = (int)bs.size(); i >= 0; i--){
        cout << bs[i] << " ";
    }
    cout << endl;
    string s("1001010");
    bitset<8>bs3(s, 0, s.size());
    for(int k = (int) bs3.size() - 1; k >= 0; k--){
        cout << bs3[k] << " ";
    }
    cout << endl;
        
    return 0;
}
