#include <iostream>
#include <string>


int main(){
    std::string str = "Hello, world!";
    std::string substr = str.substr(3, 6);
    printf("Substring: %s\n", substr.c_str());

    return 0;


}