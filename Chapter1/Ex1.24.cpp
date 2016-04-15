#include <iostream>
#include "Sales_item.h"

using namespace std;
int main(){
    Sales_item item, tmp, total;
    int n = 0;
    while(cin >> item){
        n++;
        if(n == 1){
            tmp = item;
            total = item;
            continue;
        }
        if(item.same_isbn(tmp)){
            total += item;
        }
        cout << total << endl;
    }
    return 0;
}
