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

    for(vector<string*>::iterator iter = psvec.begin(); iter != psvec.end(); ++iter){
            //  cout << *iter++ << endl; //valid
//        cout << (*iter)++ << endl; //invalid
            //      cout << *iter.empty() << endl; //invalid
            //cout << iter->empty() << endl; //valid
            // cout << ++*iter << endl; //invalid
            // cout << iter++->empty(); // valid
    }
    return 0;
}
