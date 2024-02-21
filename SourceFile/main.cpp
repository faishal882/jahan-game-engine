#include "src/graphics/window.h"
#include "src/maths/maths.h"

int main() {
  using namespace sparky;
  using namespace graphics;
  using namespace maths;

  Window window("Sparky!", 960, 540);
  glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

  GLuint vao;
  glGenVertexArrays(1, &vao);
  glBindVertexArray(vao);

  // vec3 a(1.0f, 2.0f, 5.0f);
  // vec3 b(2, 4, 3);
  // vec3 c = a + b;

  mat4 position = mat4::translation(vec3(2, 3, 4));
  position *= mat4::identity();

  position.elements[12] = 2.0f;
  vec4 column = position.columns[3];
  std::cout << column << std::endl;

  while (!window.closed()) {
    window.clear();
    // std::cout << c << " " << a << std::endl;
    glBegin(GL_QUADS);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.5f, -0.5f);
    glEnd();
    window.update();
  }

  return 0;
}
