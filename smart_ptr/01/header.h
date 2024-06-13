#pragma once
#include <iostream>
#include <vector>
#include <memory>


class tridiagonal_matrix {
public:
    std::vector<double> m_down;
    std::vector<double> m_upper;
    std::vector<double> m_middle;

    tridiagonal_matrix(
            const std::vector<double> &down,
            const std::vector<double> &upper,
            const std::vector<double> &middle) :
            m_down{down}, m_upper{upper}, m_middle{middle}
    {};
    ~tridiagonal_matrix() { std::cout << "destructor called\n"; }

    void * clone() const{
        std::unique_ptr<tridiagonal_matrix> ptr(new tridiagonal_matrix(m_down, m_upper, m_middle));
        auto down_value = ptr->m_down;
        auto upper_value = ptr->m_upper;
        auto middle_value = ptr->m_middle;
    }
};
