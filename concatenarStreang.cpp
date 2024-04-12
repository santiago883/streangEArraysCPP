#include <iostream>
#include <string>


int main(){
    std::string str1 = "Hello,";
    std::string str2 = " world!";
    std::string result = str1 + str2;
    printf("concatenando: %s\n", result.c_str());

    return 0;


}