#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<int> ivec;
    int tmp;
    while(cin >> tmp){
        ivec.push_back(tmp);
    }
    for(vector<int>::iterator itr = ivec.begin(); itr != ivec.end(); ++itr){
        cout << *itr << " ";
    }
    cout << endl;
    
    int *pa = new int[ivec.size()];
    vector<int>::iterator itr = ivec.begin();
    for(int *ipa = pa; itr != ivec.end(); ++itr, ++ipa){
        *ipa = *itr;
    }
    cout << "print the array" << endl;
    for(size_t ix = 0; ix < ivec.size(); ++ix){
        cout << *(pa+ix) << endl;
    }
    return 0;
}

