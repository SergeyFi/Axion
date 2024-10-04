#pragma once

#include <GLFW/glfw3.h>
#include <string>

namespace AE
{
    class Window
    {
    public:
         explicit Window(int w, int h, std::string name);
         Window(const Window&) = delete;
         Window &operator=(const Window&) = delete;
        ~Window();

        bool ShouldClose();

    private:
        void initWindow();

        const int width;
        const int high;
        std::string windowName;

        GLFWwindow* window;
    };
}
