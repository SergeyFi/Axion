#include "window.h"

AE::Window::Window(int w, int h, std::string name) : width(w), high(h), windowName(std::move(name))
{
    initWindow();
}

void AE::Window::initWindow()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, high, windowName.c_str(), nullptr, nullptr);
}

AE::Window::~Window()
{
    glfwDestroyWindow(window);
    glfwTerminate();
}

bool AE::Window::ShouldClose()
{
    return glfwWindowShouldClose(window);
}


