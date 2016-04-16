#include <iostream>
#include <vector>
using namespace std;

int  main(){
    vector<int> ivec = {1, 2, 3, 4, 5, 6};
    int tmp;
//    while(cin >> tmp){
        //      ivec.push_back(tmp);
        //}
    cout << *(ivec.begin()) << endl;
    vector<int>::difference_type  len = ivec.end() - ivec.begin();
//    vector<int>::iterator mid = ( ivec.begin() + ivec.end()) / 2;  // cannot work why ?
    vector<int>::iterator  mid = ivec.begin() + len / 2;
    cout << *mid << endl;
    return 0;
    
    
}
