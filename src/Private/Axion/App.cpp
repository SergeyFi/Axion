#include "Axion/App.h"
#include "Axion/Window.h"

struct AE::App::AppImpl
{
    AppImpl(int width, int height, const char* title) : lveWindow(width, height, title) {}

    AE::Window lveWindow;
};

AE::App::App() : impl(std::make_unique<AppImpl>(800, 600, "Axion"))  // Initialize the Pimpl
{}

AE::App::~App() = default;

void AE::App::Run()
{
    while (!impl->lveWindow.ShouldClose())
    {
        glfwPollEvents();
    }
}


