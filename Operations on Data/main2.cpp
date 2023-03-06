#include <iostream>
#include <cmath>

int main(int argc, char* argv[]){
    //exp: f(x) = e^x, where e = 2.71828.
    double exponencial = std::exp(10);
    std::cout << "The exponencial of 10 is: " << exponencial << std::endl;

    //potencia 
    std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is: " << std::pow(9,3) << std::endl;

    //log
    std::cout << "Log of e in base e is: " << std::log(std::exp(1)) << std::endl; 
    return 0;
}