#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string tmp_str;
    vector<string*> psvec;
    while(cin >> tmp_str){
        string *str = new string(tmp_str);
        psvec.push_back(str);
    }

    for(vector<string*>::iterator itr = psvec.begin(); itr != psvec.end(); ++itr){
        cout << *(*itr) << " " <<  (*itr)->size() << endl;;
    }
    return 0;
}
