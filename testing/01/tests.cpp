#include "main.h"


TEST_CASE("testing List", "[list]"){
    List l;
    SECTION("testing empty"){
        CHECK(l.Empty() == 0);
    }
    SECTION("testing size"){
        CHECK(l.Size() == m_size);
    }
    SECTION("testing clear"){
        CHECK(l.Clear() == nullptr);
    }
}
