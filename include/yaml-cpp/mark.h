#pragma once
#include "yaml-cpp/dll.h"

namespace YAML {
struct YAML_CPP_API Mark {
  Mark() : pos(0), line(0), column(0) {}

  static const Mark null_mark() { return Mark(-1, -1, -1); }

  bool is_null() const { return pos == -1 && line == -1 && column == -1; }

  int pos;
  int line, column;

 private:
  Mark(int pos_, int line_, int column_)
      : pos(pos_), line(line_), column(column_) {}
};
}
