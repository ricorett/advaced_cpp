#include "main.h"



int main(){
    int j = 4;
    std::vector<int> arr_vector{-1, 4, 8};
    std::cout << "[IN]: " << j << std::endl;
    std::cout << "[OUT]: " << t_pow(j) << std::endl;
    std::cout << "[IN]: ";
        for (int i : arr_vector){
            std::cout << i << " ";
        }
    std::cout << std::endl;
    std::cout << "[OUT]: ";
    arr_vector =  t_pow((std::vector<int>)arr_vector);
    for (int i : arr_vector){
        std::cout << i << " ";
    }
    return 0;
}

