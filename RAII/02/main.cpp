#include "array.h"

int main(){
   
    try {
	Array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);

    Array new_array(2);
    new_array.add_element(44);
    new_array.add_element(34);

    arr = new_array;
	std::cout << arr.get_element(1) << std::endl;
    std::cout << new_array.get_element(1) << std::endl;
}
catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;
}
    return 0;
}