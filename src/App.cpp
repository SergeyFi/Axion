#include "App.h"


void AE::App::run()
{
    while (!lveWindow.ShouldClose())
    {
        glfwPollEvents();
    }
}
