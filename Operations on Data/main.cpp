#include <iostream>

int main(int argc, char* argv[]){
    int num1 {7};
    int num2 {12};

    float result;
    //Adição
    result = num1 + num2;
    std::cout << "O resultado da soma: " << result << std::endl;

    //Subtração
    result = num1 - num2;
    std::cout << "O resultado da subtração: " << result << std::endl;

    //Multiplicação
    result = num1 * num2;
    std::cout << "O resultado da multiplicação: " << result << std::endl;

    //Divisão
    result = static_cast<float>(num1)/num2;
    std::cout << "O resultado da divisão: " << result << std::endl;

    //Resto da divisão
    result = num1 % num2;
    std::cout << "O resto da divisão do primeiro pelo segundo é: " <<result << std::endl;
    return 0;
}