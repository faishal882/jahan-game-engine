#pragma once

#include "../batchrenderer2D.h"
#include "layer.h"

namespace sparky {
namespace graphics {

class TileLayer : public Layer {
public:
  TileLayer(Shader *shader);
  ~TileLayer();
};

} // namespace graphics
} // namespace sparky
