#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s;
    string t;
    while(getline(cin, s)){
        t += s;
    }
    cout << t << endl;
    return 0;
    
}


