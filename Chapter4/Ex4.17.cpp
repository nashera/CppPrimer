#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 5, 6};

    int *p1 = &a[2];
    int *p2 = &a[2];
    p1 += p2 - p1; // p1 = p2
    cout << *p1 << endl;
    return 0;
}
