#include <iostream>  
int main(){  
    int i = 0 ;
    int arr[4];
    
    std::cout <<"escreva 5 digitos "<<std::endl; 

    while (i != 5)
    {
        std::cin>>arr[i];
        i++;
    }

    std::cout << "seus numeros são "<<arr[0]<<", "<<arr[1]<<", "<<arr[2]<<", "<<arr[3]<<", "<<arr[4]<<std::endl; 

    
    
    return 0;  
} 