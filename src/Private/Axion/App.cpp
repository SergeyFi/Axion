#include "Axion/App.h"
#include "Axion/Window.h"


AE::App::App() : window(std::make_unique<AE::Window>(800, 600, "Axion")){}

AE::App::~App() = default;

void AE::App::Run()
{
    while (!window->ShouldClose())
    {
        glfwPollEvents();
    }
}


