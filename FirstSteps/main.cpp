#include <iostream>

int main(int argc, char* argv[]){
    std::string local;

    std::cout << "Where do you live ?" << std::endl;
    std::cin >> local;
    std::cout << "I have heard great things about " << local << ". I would like to go sometime." << std::endl;

    return 0;
}