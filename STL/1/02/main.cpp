#include "header.h"

int main(){
    int n = 0;
    std::cout << "[IN]: \n";
    std::cin >> n;
    std::list<int> list;

    for (int i = 0; i < n; i++){
        int push = 0;
        std::cin >> push;
        list.push_back(push);
    }
    list.sort();
    list.unique();
    list.reverse();
    std::cout << "[OUT]: \n";
    for (const auto& elem : list)
        std::cout << elem << " ";
    return 0;
}