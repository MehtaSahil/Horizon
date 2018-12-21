
#include <assert.h>
#include <iostream>
#include "Person.hpp"

namespace src {
namespace tests {

void TEST_initialize_person() {
  Person p0 = Person(0);
  Person p1 = Person(1);

  assert(p0.get_id() == 0);
  assert(p1.get_id() == 1);

  std::cout << "PASSED: TEST_initialize_person()\n";
}

} // namespace tests
} // namespace src

int main(int argc, char** argv) {

  src::tests::TEST_initialize_person();

  return 0;
}
