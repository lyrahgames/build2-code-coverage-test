#pragma once

#include <ostream>
#include <stdexcept>
#include <string>

namespace codecov_test {
// Print a greeting for the specified name into the specified
// stream. Throw std::invalid_argument if the name is empty.
//
inline void say_hello(std::ostream& o, const std::string& name) {
  using namespace std;

  if (name.empty())
    throw invalid_argument("empty name");

  o << "Hello, " << name << '!' << endl;
}

void say_bye(std::ostream& o) {
  o << "Bye!\n";
}

}  // namespace codecov_test
