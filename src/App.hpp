#pragma once

#include "GraphicsSystem.hpp"

class App {
public:
    App();
    virtual ~App();

private:
    GraphicsSystem graphicsSystem_;

private:
    void init();
};
