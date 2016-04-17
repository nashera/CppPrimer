#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    char *str1 = const_cast<char*>("hello, world");
    char *str2;
    char str3[40];
        //  char *str3 = (char *)malloc(5);
    strcpy(str2, str1);
    strncpy(str3, str1, 3);
    str3[3] = '\0';
    cout << "str1 " << str1 << endl;
    cout << "str2 " << str2 << endl;
    cout << "str3 " << str3 << endl;
//    free(str3);
    return 0;
    
    
    
}
