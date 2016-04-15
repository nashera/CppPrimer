#include <iostream>
using namespace std;
int main(){
    int m, n, upper, lower;
    cout << "please input two numbers" << endl;
    cin >> m >> n;
    if(m > n){
        upper = m; lower = n;
    }else{
        upper = n; lower = m;
    }
    int j = 1;
    for(int i = lower; i <= upper; i++, j++)
    {
        cout << i << "\t";
        if(j % 10 == 0){
            cout << endl;
        }
        
    }
    return 0;
}
