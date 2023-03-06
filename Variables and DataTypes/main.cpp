#include <iostream>

int main(int argc, char* argv[]){
    double num1;
    double num2;
    
    std::cout << "Insinira o primeiro número decimal: ";
    std::cin >> num1;
    std::cout << "Insinira o segundo número decimal: ";
    std::cin >> num2;
    std::cout << num1/num2 << std::endl; 

    return 0;
}