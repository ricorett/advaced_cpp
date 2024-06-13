#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <string>

template <typename Container>
class ContainerPrinter {
public:
    ContainerPrinter(const Container& container) : container_(container) {}

    void print_container() const {
        for (const auto& element : container_) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

private:
    const Container& container_;
};
