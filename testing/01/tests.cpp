#define CATCH_CONFIG_MAIN

#include "main.h"

TEST_CASE("testing List", "[list]"){
List l;
SECTION("testing empty"){
CHECK(l.Empty() == true);
}
SECTION("testing size"){
unsigned int size = l.Size();
CHECK(size == l.Size());
}
SECTION("testing clear"){
l.Empty();
CHECK(l.Size() == 0);
}
}