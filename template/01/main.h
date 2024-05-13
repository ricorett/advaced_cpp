#pragma once

#include <iostream>
#include <cmath>
#include <vector>

template <typename Type>
Type t_pow(Type i){
    return pow(i,2);
}

template<>
std::vector<int> t_pow<std::vector<int> >(std::vector<int> arr_vector) {
    for (int& i : arr_vector) {
        i = pow(i, 2);
    }
    return arr_vector;
}
