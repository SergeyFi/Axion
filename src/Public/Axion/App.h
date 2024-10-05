#pragma once
#include "window.h"

namespace AE
{
    class App
    {
    public:
        void Run();
    private:
        AE::Window lveWindow{800, 600, "Axion"};
    };
}
