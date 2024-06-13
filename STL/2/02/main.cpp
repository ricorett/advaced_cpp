#include "main.h"

int main() {
    std::set<std::string> test_set = {"one", "two", "three", "four"};
    ContainerPrinter<std::set<std::string> > printer_set(test_set);
    printer_set.print_container();

    std::list<std::string> test_list = {"one", "two", "three", "four"};
    ContainerPrinter<std::list<std::string> > printer_list(test_list);
    printer_list.print_container();

    std::vector<std::string> test_vector = {"one", "two", "three", "four"};
    ContainerPrinter<std::vector<std::string> > printer_vector(test_vector);
    printer_vector.print_container();

    return 0;
}
