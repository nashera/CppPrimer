#include <iostream>
#include <string>
using namespace std;
int main(){
    unsigned buf_size = 1024;
    int ia[4 * 7 - 14];
//    char *st  = const_cast<char*>("fundamental");
    char *st = (char*)"hello";
    char str[] = "hello";
    cout << st << endl;
    return 0;
}
