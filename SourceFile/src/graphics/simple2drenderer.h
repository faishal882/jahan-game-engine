#pragma once

#include "renderer2d.h"
#include "static_sprite.h"
#include <deque>

namespace sparky {
namespace graphics {

class Simple2DRenderer : public Renderer2D {
private:
  std::deque<const StaticSprite *> m_RenderQueue;

public:
  void submit(const Renderable2D *renderable) override;
  void flush() override;
};

} // namespace graphics
} // namespace sparky
