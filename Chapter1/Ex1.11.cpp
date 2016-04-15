#include <iostream>
using namespace std;

int main(){
    int sum1 = 0;
    int i = 10;
    while(i > 0){
        sum1 += i;
        i--;
    }
    int sum2 = 0;
    for(int i = 0; i <= 10; i++)
        sum2 += i;
    
        
    cout << "sum1 " <<  sum1 << endl;
    cout << "sum2 " << sum2 << endl;
    return 0;
}
