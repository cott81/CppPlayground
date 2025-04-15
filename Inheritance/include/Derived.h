/*
 * Derived.h
 */

#ifndef DERIVED_H_
#define DERIVED_H_

#include "Base.h"

namespace inheritance {

class Derived : public Base 
{
public:

	Derived();
    virtual ~Derived();

    int Func();
    int VFunc();

    void OnlyInDerived();

protected:

    int data = 81;
	
};

} /* namespace inheritance */

#endif /* DERIVED_H_ */
