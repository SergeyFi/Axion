#pragma once
#include <memory>

namespace AE
{
    class Window;

    class App
    {
    public:
        App();
        ~App();
        void Run();
    private:
        std::unique_ptr<Window> window;
    };
}
