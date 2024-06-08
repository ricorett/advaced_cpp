#include "header.h"

int main(){
    std::vector<int> vec = {1,1,2,5,6,1,2,4};

    std::cout << "[IN]: ";
    for (const auto& elem : vec)
    std::cout << elem << " ";
    std::cout << std::endl;

    std::sort(vec.begin(), vec.end());
    vec.resize(unique(vec.begin(),vec.end())-vec.begin());
    std::cout << "[OUT]: ";
    for (const auto& elem : vec)
        std::cout << elem << " ";
    std::cout << std::endl;
    return 0;
}