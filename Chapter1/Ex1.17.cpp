#include <iostream>
using namespace std;

int main(){
    cout << "please input a bunch of numbers" << endl;
    int n = 0;
    int tmp;
    while(cin >> tmp){
        if(tmp < 0){
            n++;
        }
    }
    cout << "you have input " << n << " negative numbers" << endl;
    return 0;
}
