#pragma once
#include <iostream>
#include <string>
#include <algorithm>


class BigInt {
public:
    BigInt() = default;
    BigInt(const std::string& num) : number(num) {
        std::reverse(number.begin(), number.end()); // Сохраняем цифры в обратном порядке
    }
    BigInt(std::string&& num) : number(std::move(num)) {
        std::reverse(number.begin(), number.end());
    }

    BigInt(BigInt&& other) noexcept : number(std::move(other.number)) {}

    BigInt& operator=(BigInt&& other) noexcept {
        if (this != &other) {
            number = std::move(other.number);
        }
        return *this;
    }

    BigInt operator+(const BigInt& other) const {
        std::string result;
        int carry = 0;
        int maxLength = std::max(number.size(), other.number.size());

        for (int i = 0; i < maxLength; ++i) {
            int digit1 = (i < number.size()) ? number[i] - '0' : 0;
            int digit2 = (i < other.number.size()) ? other.number[i] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }

        if (carry > 0) {
            result.push_back(carry + '0');
        }

        std::reverse(result.begin(), result.end());
        return BigInt(result);
    }

    BigInt operator*(int num) const {
        if (num == 0) {
            return BigInt("0");
        }

        std::string result;
        int carry = 0;

        for (char digit : number) {
            int product = (digit - '0') * num + carry;
            carry = product / 10;
            result.push_back((product % 10) + '0');
        }

        while (carry > 0) {
            result.push_back((carry % 10) + '0');
            carry /= 10;
        }

        std::reverse(result.begin(), result.end());
        return BigInt(result);
    }

    friend std::ostream& operator<<(std::ostream& os, const BigInt& bigint) {
        std::string result = bigint.number;
        std::reverse(result.begin(), result.end());
        os << result;
        return os;
    }

private:
    std::string number;
};

