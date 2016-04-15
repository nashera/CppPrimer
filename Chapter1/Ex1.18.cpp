#include <iostream>
using namespace std;

int main() {
    int m, n, upper, lower;
    cout << "please input two numbers" << endl;
    cin >> m >> n;
    if(m > n){
        upper = m; lower = n;
    }else{
        upper = n; lower = m;
    }
    for(int i = lower; i <= upper; i++){
        cout << i << endl;
    }
}
