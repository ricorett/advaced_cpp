#include "header.h"

int main(){
    std::vector<int> vec = {1,1,2,5,6,1,2,4};

    std::cout << "[IN]: ";
    for (const auto& elem : vec)
    std::cout << elem << " ";
    std::cout << std::endl;


    return 0;
}