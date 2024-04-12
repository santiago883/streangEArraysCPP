#include <iostream>
#include <string>


int main(){
    std::string palavra ;


    printf("digite uma palavra");
    std::cin >> palabra ;


    printf("sua palavra è %s e ela tem %zu", palavra, palavra.size());


    // std::string str = "Hello, world!";
    // int pos = str.find("world");
    // if(pos != std::string::npos) {
    //     printf("Encontrado na posição: %d\n", pos);
    // }else{
    //     printf("Não encontrado\n");
    // }
    

    return 0;


}