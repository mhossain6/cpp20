module mymodule;

import std.core;
using namespace std;


namespace mymodule {

    void thr(std::shared_ptr<Base> p)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::shared_ptr<Base> lp = p; // thread-safe, even though the
                                      // shared use_count is incremented
        {
            static std::mutex io_mutex;
            std::lock_guard<std::mutex> lk(io_mutex);
            std::cout << "local pointer in a thread:\n"
                << "  lp.get() = " << lp.get()
                << ", lp.use_count() = " << lp.use_count() << '\n';
        }
    }
};
