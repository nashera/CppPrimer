#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> ivec1; // zero element
    vector<int> ivec2(10); // 10 elements, each initialized to 0
    vector<int> ivec3(10, 42); // 10 elements, each initialized to 42
    vector<string> svec1; // zero element
    vector<string> svec2(10); // 10 elements, each an empty string
    vector<string> svec3(10, "hello");// 10 elements, each contain "hello"  
}
