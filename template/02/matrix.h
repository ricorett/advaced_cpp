#pragma once
#include <iostream>

template<class T>
class Table {
public:


    Table(int rows, int cols) : r(rows), c(cols), data(r * c){};
    ~Table() = default;

    std::pair<int, int> Size() const {
        return std::make_pair(r, c);
    }
    T getElement() const
    {
        return data[r][c];
    }
    T operator[](int index) const {
        return data[r][c];
    }
    T& operator[](int index) {
        return data[r][c];
    }
private:
    int r, c;
    std::vector<T> data;

};



