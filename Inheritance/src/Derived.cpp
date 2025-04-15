#include "Derived.h"
#include <iostream>


namespace inheritance {

Derived::Derived() {
    std::cout << "Constructor Derived" << std::endl;
}

Derived::~Derived()
{
    std::cout << "Destructor Derived" << std::endl;
}

int Derived::Func()
{
    std::cout << "Derived::Func " << data << std::endl;
    return 0;
}

int Derived::VFunc()
{
    std::cout << "Derived::VFunc" << std::endl;
    return 0;
}

void Derived::OnlyInDerived()
{
    std::cout << "Derived::OnlyInDerived" << std::endl;
}

}