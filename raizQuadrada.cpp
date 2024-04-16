#include <iostream>
#include <string>
#include<iomanip>
#include<cmath>

using namespace std;


int main(){
    
    double x = 2, y = 4;
    std::cout << std::fixed << std::setprecision(2) << "A raiz quadrada de x + y é: " << std::sqrt(x + y) << std::endl;

    return 0;


}