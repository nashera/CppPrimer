#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cassert>
using namespace std;
bool cmp_string(const string &str1, const string &str2){
    if(str1.size() != str2.size()){
        return false;}
    for(auto itr1 = str1.begin(), itr2 = str2.begin(); itr1 != str1.end(); ++itr1, ++itr2){
        if(*itr1 != *itr2){
            return false;
        }
    }
    return true;
}
bool cmp_c_string(const char *cp1, const char *cp2){
    assert(cp1);
    assert(cp2);
    if(strlen(cp1) != strlen(cp2)){
        return false;
    }
    while(*cp1){
        if(*cp1 != *cp2){
            return false;
        }
        cp1++;
        cp2++;
    }
    return true;
}
int main(){
    const char *cp1 = "hello";
    const char *cp2 = "hello";
    if(cmp_c_string(cp1, cp2)){
        cout << "the two strings is equal!" << endl;
    }else{
        cout << "the two strings is unequal!" << endl;
}
    string str1(cp1);
    string str2(cp2);
    if(cmp_string(cp1, cp2)){
        cout  << "the two string object is equal!" << endl;
    }else{
        cout << "the two string object is unequal!" << endl;
    }
    return 0;
}
