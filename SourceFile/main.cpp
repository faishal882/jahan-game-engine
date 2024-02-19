#include "src/graphics/window.h"

int main() {
  using namespace sparky;
  using namespace graphics;

  Window window("Sparky!", 960, 540);
  glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

  GLuint vao;
  glGenVertexArrays(1, &vao);
  glBindVertexArray(vao);

  while (!window.closed()) {
    window.clear();
    if (window.isKeyPressed(GLFW_KEY_A)) {
      std::cout << "KEY: " << window.isKeyPressed(GLFW_KEY_A) << std::endl;
    }
    glBegin(GL_QUADS);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.5f, -0.5f);
    glEnd();
    // glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
    window.update();
  }

  return 0;
}
