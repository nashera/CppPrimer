#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "please input two numbers." << endl;\
    cin >> m >> n;
    upper = (m > n) ? m : n;
    lower = (m < n) ? n : m;
    for(int i = upper; i <= lower; i--){
        cout << i << endl;
    }
    return 0;
}
