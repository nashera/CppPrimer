#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(){
    const char *pc = "a very long literal string";
    const size_t len = strlen(pc + 1);
    for(size_t ix = 0; ix != 1000000; ++ix){
        char *pc2 = new char[len + 1];
        strcpy(pc2, pc);
        if(strcmp(pc2, pc))
            ; // do nothing
        delete [] pc2;
    }


    string str("a very long literal string.");
    for(int ix = 0; ix != 1000000; ++ix){
        string str2 = str;
        if(str != str2)
            ; // do nothing
    }
}

