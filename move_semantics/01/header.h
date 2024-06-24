#include <vector>
#include <utility>

template <typename T>
void moveVector(std::vector<T>& source, std::vector<T>& destination) {
    destination = std::move(source);
}
