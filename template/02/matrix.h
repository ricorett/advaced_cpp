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
        check_bounds(row, col);
        return data[row * c + col];
    }

    T& getElement(int row, int col) {
        check_bounds(row, col);
        return data[row * c + col];
    }

    T* operator[](int row) {
        if (row < 0 || row >= r) {
            throw std::out_of_range("Index out of bounds");
        }
        return &data[row * c];
    }

    const T* operator[](int row) const {
        return &data[row * c];
    }

    void check_bounds(int row, int col) const {
        if (row < 0 || row >= r || col < 0 || col >= c) {
            throw std::out_of_range("Index out of bounds");
        }
    }

private:
    int r, c;
    std::vector<T> data;
};
