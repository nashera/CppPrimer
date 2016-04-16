#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2){
        cout << "the strings are equal" << endl;
    }else if(s1 > s2){
        cout << "the string s1 is larger" << endl;
    }else {
        cout << "the string s2 is larger" << endl;
    }
    string::size_type l1 = s1.size();
    string::size_type l2 = s2.size();
    if(l1 == l2){
        cout << "the two strings have the same length" << endl;
    }else {
        cout << "the string " << (l1 > l2 ? s1 : s2) << " have the longer length" << endl;
        
    }
    return 0;
}
