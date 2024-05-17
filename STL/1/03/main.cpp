#include "main.h"

int main(){
    FunctorThree func;
    std::vector<int> data {4, 1, 3, 6, 25, 54};
    std::cout << "[IN]: ";
    for (int i : data) {
        std::cout << i << " ";
        func(i);
    }
    std::cout << std::endl;

    std::cout << "[OUT]: get_sum() = " << func.get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << func.get_count() << std::endl;
    return 0;
}