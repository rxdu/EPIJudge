double Power(double x, int y) {
  // Implement this placeholder.
  return 0.0;
}

#include "test_framework/test_utils_generic_main.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> param_names{"x", "y"};
  generic_test_main(argc, argv, param_names, "power_x_y.tsv", &Power);
  return 0;
}
