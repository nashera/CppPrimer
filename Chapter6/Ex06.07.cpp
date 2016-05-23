#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    char ch;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    while(cin >> ch){
        ch = tolower(ch);
        switch(ch){
            case 'a':
                ++aCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
    cout << "Number of vowel a: \t" << aCnt << endl;
    cout << "Number of vowel e: \t" << eCnt << endl;
    cout << "Number of vowel i: \t" << iCnt << endl;
    cout << "Number of vowel o: \t" << oCnt << endl;
    cout << "Number of vowel u: \t" << uCnt << endl;
    return 0;
}
