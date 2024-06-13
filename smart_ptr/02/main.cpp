#include "header.h"

int main()
{
    {
        auto node1 = std::make_shared<node>(1);
        auto node2 = std::make_shared<node>(2);
        node1->parent = node2;
        node2->parent = node1;

        node1->parent.lock()->m_value = 4;
    }

    return 0;
}
