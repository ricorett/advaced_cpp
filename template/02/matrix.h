#pragma once
#include <iostream>
#include <utility>
#include <vector>


template<class T>
class Table {
public:
    Table(int rows, int cols) : r(rows), c(cols), data(rows * cols) {}
    ~Table() = default;

    [[nodiscard]] std::pair<int, int> Size() const {
        return std::make_pair(r, c);
    }

    T getElement(int row, int col) const {
        return data[row * c + col];
    }

    T& getElement(int row, int col) {
        return data[row * c + col];
    }

    T* operator[](int row) {
        return &data[row * c];
    }

    const T* operator[](int row) const {
        return &data[row * c];
    }

private:
    int r, c;
    std::vector<T> data;
};
