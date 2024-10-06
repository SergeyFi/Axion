#pragma once
#include <memory>

namespace AE
{
    class App
    {
    public:
        App();
        ~App();
        void Run();
    private:
        struct AppImpl;
        std::unique_ptr<AppImpl> impl;
    };
}
