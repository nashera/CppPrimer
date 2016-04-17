#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdlib>
using namespace std;
int main(){
    string tmp;
    vector<string> svec;
    while(cin >> tmp){
        svec.push_back(tmp);
    }
    char **psarray = new char*[svec.size()];
    auto itr = svec.begin();
    for(char **ps = psarray; itr != svec.end(); ++itr, ++ps){
        char *tmp_array = new char[(*itr).size()];
        strcpy(tmp_array, (*itr).c_str());
        *ps = tmp_array;
    }
    for(char **ps = psarray; ps != psarray + svec.size(); ++ps){
        cout << *ps << endl;
    }
    delete [] psarray;
    return 0;
        
    
    
}
