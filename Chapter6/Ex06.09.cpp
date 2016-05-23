#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
int main(){
    char ch;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	int tabCnt = 0;
	int newLineCnt = 0;
	int spcCnt = 0;
	int ffCnt = 0,  flCnt = 0, fiCnt = 0;
	int flag = 0;
	
    while((ch = getchar()) != EOF){
	  ch = tolower(ch);
	  switch(ch){
	  case 'f':
		if(flag == 1){++ffCnt;}
		break;
	  case 'l':
		if(flag == 1){++flCnt;}
		break;
	  case 'a':
		++aCnt;
		break;
	  case 'i':
		if(flag == 1){++fiCnt;}
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
	  case '\t':
		++tabCnt;
		break;
	  case '\n':
		++newLineCnt;
		break;
	  case ' ':
		++spcCnt;
		break;
	  }
	   if(ch == 'f'){
		 flag = 1;
	   }else{
		 flag = 0;
	   }
	   
    }
    cout << "Number of vowel a: \t" << aCnt << endl;
    cout << "Number of vowel e: \t" << eCnt << endl;
    cout << "Number of vowel i: \t" << iCnt << endl;
    cout << "Number of vowel o: \t" << oCnt << endl;
    cout << "Number of vowel u: \t" << uCnt << endl;
	cout << "Number of tab: \t" << tabCnt << endl;
	cout << "Number of newline: \t" << newLineCnt << endl;
	cout << "Number of space: \t" << spcCnt << endl;
	cout << "Number of ff: \t" << ffCnt << endl;
	cout << "Number of fl: \t" << flCnt << endl;
	cout << "Number of fi: \t" << fiCnt << endl;
    return 0;
}
