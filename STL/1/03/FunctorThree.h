#pragma once
#include "main.h"

class FunctorThree {
public:
    FunctorThree() : sum(0), count(0){}
    ~FunctorThree() = default;
    int operator()(int x) {
        if ((x % 3) == 0){
            sum += x;
            count++;
        }
    }
    int get_sum(){
        return sum;
    }
    int get_count(){
        return count;
    }
private:
    int sum;
    int count;
};