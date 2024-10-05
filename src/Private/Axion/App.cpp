#include "Axion/App.h"


void AE::App::Run()
{
    while (!lveWindow.ShouldClose())
    {
        glfwPollEvents();
    }
}
