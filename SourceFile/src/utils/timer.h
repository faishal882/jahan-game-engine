// typedef unsigned char BYTE;
// typedef unsigned long DWORD;
// typedef long LONG;
// typedef int64_t LONGLONG;

// typedef union _LARGE_INTEGER {
//   struct {
//     DWORD LowPart;
//     LONG HighPart;
//   } DUMMYSTRUCTNAME;
//   struct {
//     DWORD LowPart;
//     LONG HighPart;
//   } u;
//   LONGLONG QuadPart;
// } LARGE_INTEGER;

#pragma once

#include <chrono>

namespace sparky {

class Timer {
private:
  std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;

public:
  Timer() { reset(); }

  void reset() { m_Start = std::chrono::high_resolution_clock::now(); }

  float elapsed() {
    auto current = std::chrono::high_resolution_clock::now();
    return std::chrono::duration<float>(current - m_Start).count();
  }
};

} // namespace sparky
