#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
    Sales_item item, item_sum;
    while(cin >> item){
        item_sum += item;
    }
    cout << item_sum << endl;
    return 0;
    
}
