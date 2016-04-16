#include <string>
#include <iostream>
#include <algorithm>

int main() {
    std::string s1 = "a1a2b3c4a5";
    char s2[256];
    std::copy_if(s1.begin(), s1.end() + 1, s2, [](char c){return c!='a';});
    std::cout << s2 << std::endl;
    return 0;
}
