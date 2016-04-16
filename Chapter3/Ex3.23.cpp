#include <iostream>
#include <bitset>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
    bitset<8> bs;
    for(int i = (int)bs.size() - 1; i >= 0; i--){
        cout << bs[i] << " ";
    }
    cout << endl;
    bitset<8> bs2((long) 131);
        //显示
    for(int j = (int) bs2.size() - 1; j >= 0; j--){
        cout << bs2[j] << " ";
    }
    cout << endl;
    string s("1001010");
    bitset<8>bs3(s, 0, s.size());
    for(int k = (int) bs3.size() - 1; k >= 0; k--){
        cout << bs3[k] << " ";
    }
    cout << endl;
}
