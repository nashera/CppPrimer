#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    const char *str1 = "hello, world";
    char *str2;
    char str3[40];
    strcpy(str2, str1);
    strncpy(str3, str1, 3);
    str3[5] = '\0';

    cout << "str1 " << str1 << endl;
    cout << "str2 " << str2 << endl;
    cout << "str3 " << str3 << endl;
    return 0;
    
    
    
}
