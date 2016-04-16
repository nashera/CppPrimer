#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    
    string s;
    string t;
    while(getline(cin, s)){
        stringstream(s) >> t;
    }
    cout << t << endl;
    return 0;
    
}
