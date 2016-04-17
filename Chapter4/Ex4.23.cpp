#include <string>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const char *cp = "hello";
    int cnt;
    while(*cp)
    {
        ++cnt;
        ++cp;
        cout <<"cnt " << cnt << endl;
        cout << "cp " << cp << endl;
    }
    return 0;

}
