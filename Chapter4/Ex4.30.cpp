#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cassert>
using namespace std;
void mystrcpy(char *dest, const char *src);
void mystrcat(char *dest, const char *src);

int main(){
    const int buf_size = 1014;
    const char *str1 = "hello";
    const char *str2 = "world";
    char str3[buf_size];
    memset(str3, 0, buf_size);
//    strcpy(str3, str1);
//    strcat(str3, str2);

    mystrcpy(str3, str1);
    mystrcat(str3, str2);
    cout << str3 << endl;

    
    string sstr1(str1);
    string sstr2(str2);
    string sstr3 = sstr1 + sstr2;
    cout << sstr3 << endl;
    return 0;
   
}


void mystrcpy(char *dest, const char *src){
    assert(src);
    while(*src){
        *dest++ = *src++;
    }
}

void mystrcat(char *dest, const char *src){
    assert(dest);
    assert(src);
    
    size_t dest_len = strlen(dest);
    char *dest_tail = dest + dest_len;
    while(*src){
        *dest_tail++ = *src++;
    }
}
