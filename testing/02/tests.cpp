#define CATCH_CONFIG_MAIN
#include "main.h"

TEST_CASE("List operations", "[list]") {
    List l;

    SECTION("PushBack adds element to the back of the list") {
        l.PushBack(1);
        CHECK(l.Size() == 1);
        CHECK(!l.Empty());
    }

    SECTION("PushFront adds element to the front of the list") {
        l.PushFront(2);
        CHECK(l.Size() == 1);
        CHECK(!l.Empty());
    }

    SECTION("PopBack removes element from the back of the list") {
        l.PopBack();
        CHECK(l.Size() == 0);
        CHECK(!l.Empty());

        l.PushBack(3);
        l.PushBack(4);
        l.PushBack(5);
        l.PopBack();
        CHECK(l.Size() == 2);
    }

    SECTION("PopFront removes element from the front of the list") {
        l.PopFront();
        CHECK(l.Size() == 0);
        CHECK(l.Empty());

        l.PushBack(6);
        l.PushBack(7);
        l.PushBack(8);
        l.PopFront();
        CHECK(l.Size() == 2);
    }

    SECTION("Complex scenario") {
        l.PushBack(9);
        l.PushFront(10);
        l.PushBack(11);
        l.PushFront(12);
        CHECK(l.Size() == 4);

        l.PopBack();
        l.PopFront();
        CHECK(l.Size() == 2);

        l.PushFront(13);
        l.PushBack(14);
        CHECK(l.Size() == 4);
    }
}
