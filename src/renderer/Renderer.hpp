#pragma once

#include "../LifeSimulator.hpp"

class Renderer
{
  public:
    virtual ~Renderer() = default;
    virtual void render(const LifeSimulator& simulation) = 0;
};