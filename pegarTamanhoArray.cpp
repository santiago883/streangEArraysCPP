#include <stdio.h>  
int main() {  
    int array[] = {1,2,3};  
    int tamanho = sizeof(array) / sizeof(array[0]);  
    printf("Tamanho do array: %d\n", tamanho);  
    return 0;  
}