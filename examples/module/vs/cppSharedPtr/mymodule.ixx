module;
export module mymodule;

import std.core;
using namespace std;


export namespace mymodule {
    struct Base
    {
        Base() { std::cout << "  Base::Base()\n"; }
        // Note: non-virtual destructor is OK here
        ~Base() { std::cout << "  Base::~Base()\n"; }
    };

    struct Derived : public Base
    {
        Derived() { std::cout << "  Derived::Derived()\n"; }
        ~Derived() { std::cout << "  Derived::~Derived()\n"; }
    };
	void thr(std::shared_ptr<Base> p);
};
