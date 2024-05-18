#pragma once
#include "main.h"

class FunctorThree {
public:
    FunctorThree() : sum(0), count(0){}
    ~FunctorThree() = default;
    void operator()(int x) {
        if ((x % 3) == 0){
            sum += x;
            count++;
        }
    }
    int get_sum() const{
        return sum;
    }
    int get_count() const{
        return count;
    }
private:
    int sum;
    int count;
};