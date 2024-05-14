#include "matrix.h"

int main(){
    Table table(2,3);
    auto test = table<int>(2, 3);
    test[0][0] = 4;
    std::cout << test[0][0]; // выводит 4
    return 0;

}