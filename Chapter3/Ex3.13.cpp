#include <vector>
#include <iostream>
using namespace std;
int main(){
    int a;
    vector<int> ivec;
    while(cin >> a){
        ivec.push_back(a);
    }
    int sum = 0;
    for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter){
        sum += *iter;
    }
    cout << sum << endl;
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix){
        if(ix % 2 == 0){
            continue;
        }
        cout << ivec[ix-1] + ivec[ix] << endl;
    }
    if(ivec.size() != )
    

    
    return 0;
}
