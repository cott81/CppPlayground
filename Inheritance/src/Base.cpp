#include "Base.h"
#include<iostream>

namespace inheritance {

Base::Base() {
    std::cout << "Constructor Base" << std::endl;
}

Base::~Base()
{
    std::cout << "Destructor Base" << std::endl;
}

void Base::OnlyInBase()
{
    std::cout << "Base::OnlyInBase" << std::endl;
}

int Base::Func()
{
    std::cout << "Base::Func" << std::endl;
    return 0;
}

int Base::VFunc()
{
    std::cout << "Base::VFunc" << std::endl;
    return 0;
}

}