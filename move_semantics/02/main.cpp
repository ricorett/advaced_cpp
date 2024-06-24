#include "bigInt.h"
int main() {
    BigInt number1("114575");
    BigInt number2("78524");
    BigInt result = number1 + number2;

    std::cout << result << std::endl; // 193099

    return 0;
}
