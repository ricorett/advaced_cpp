
#include "main.h"

int main(){
    std::string str = "Hello world!!";
    std::map<char, int> frequency;
    std::cout << "[IN]: " << str << std::endl;
    std::cout << "[OUT]: " << std::endl;
    for (char c : str) {
        frequency[c]++;
    }
    std::vector<std::pair<char, int>> freqVector(frequency.begin(), frequency.end());

    std::sort(freqVector.begin(), freqVector.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return b.second < a.second;
    });
    for (const auto& pair : freqVector) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }
    return 0;
}