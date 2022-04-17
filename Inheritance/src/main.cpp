#include <iostream>

#include "Base.h"
#include "Derived.h"

using namespace std;

using namespace inheritance;


int main()
{
    cout << "Inheritance" << endl;

    Base base;
    base.OnlyInBase();
    base.Func(); // calls Base::Func
    base.VFunc(); // calls Base::VFunc

    Derived derived;
    derived.OnlyInBase();
    derived.Func(); // calls Derived::Func
    derived.VFunc(); // calls Derived::VFunc

    Base* b = new Derived();
    b->OnlyInBase();
    b->Func(); // calls Base::Func !
    b->VFunc(); // calls Derived::VFunc !

    //Derived* dd = new Base(); //conversion error!

    Derived* d = static_cast<Derived*>(new Base); // -> no call of derived constructor
    d->Func(); // calls Derived::Func 0 ????  Kennt die Funktion aber hat nicht die objektdaten (auch kein konstruktor aufruf) TODO  wie das?
    d->OnlyInDerived(); 
    d->OnlyInBase();
    d->VFunc(); // calls Base::VFunc ???

    Derived* dd = dynamic_cast<Derived*>(new Base);
    if (dd == nullptr)
    {
        //not safe
        cout << "cast of Base -> Derived is unsafe. dynamic_cast returns nullptr" << endl;
    }
    else
    {
        //safe
        cout << "safe cast. dynamic_cast returns a valid pointer" << endl;
    }


    return 0;
}
