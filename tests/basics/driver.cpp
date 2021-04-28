#include <cassert>
#include <sstream>
#include <stdexcept>

#include <codecov-test/version.hpp>
#include <codecov-test/codecov-test.hpp>

int main ()
{
  using namespace std;
  using namespace codecov_test;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
