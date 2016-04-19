
#include <iostream>
#include <string>
using namespace std;
bool is_even(const int &a);
int main(){
    int a;
    cin >> a;
    if(is_even(a)){
        cout << "the number you input is even" << endl;
    }else{
        cout << "the number you input is odd" << endl;
    }
    return 0;
}

bool is_even(const int &i){
    return (i % 2 == 0 ? true : false);
}
