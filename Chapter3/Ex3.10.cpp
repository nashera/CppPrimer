#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    string::size_type punc_cnt = 0;
    for(string::size_type index = 0; index != s.size(); ++index){
        if(ispunct(s[index])){
            ++punc_cnt;
        }
    }
    cout << punc_cnt << " punctuation characters in " << s << endl;
    string strip_s;
    for(string::size_type index = 0; index != s.size(); ++index){
        if(! ispunct(s[index])){
            strip_s += s[index];
        }
    }
    cout << strip_s << endl;
    return 0;
    
}

