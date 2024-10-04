#pragma once
#include "window.h"

namespace AE
{
    class App
    {
    public:
        void run();
    private:
        AE::Window lveWindow{800, 600, "Axion"};
    };
}
