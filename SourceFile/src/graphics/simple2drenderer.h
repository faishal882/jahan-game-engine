#pragma once

#include "renderer2d.h"
#include <deque>

namespace sparky {
namespace graphics {

class Simple2DRenderer : public Renderer2D {
private:
  std::deque<const Renderable2D *> m_RenderQueue;

public:
  virtual void submit(const Renderable2D *renderable2) override;
  virtual void flush() override;
};
} // namespace graphics
} // namespace sparky
