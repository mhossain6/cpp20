// cppSharedPtr.cpp : Defines the entry point for the application.

import std.core;
import mymodule;

using namespace std;
using namespace mymodule;


int main()
{
    std::shared_ptr<Base> p = std::make_shared<Derived>();

    std::cout << "Created a shared Derived (as a pointer to Base)\n"
        << "  p.get() = " << p.get()
        << ", p.use_count() = " << p.use_count() << '\n';
    std::thread t1(thr, p), t2(thr, p), t3(thr, p);
    p.reset(); // release ownership from main
    std::cout << "Shared ownership between 3 threads and released\n"
        << "ownership from main:\n"
        << "  p.get() = " << p.get()
        << ", p.use_count() = " << p.use_count() << '\n';
    t1.join(); t2.join(); t3.join();
    std::cout << "All threads completed, the last one deleted Derived\n";

    return 0;
}
 
