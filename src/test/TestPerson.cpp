
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

void TEST_set_negative_person_id() {
  int32_t test_id = 5;

  Person p = Person(test_id);
  assert(p.get_id() == test_id);

  // Should not be able to overwrite valid person_id with negative person_id
  p.set_id(-3);

  assert(p.get_id() == test_id);

  std::cout << "PASSED: TEST_set_negative_person_id()\n";
}

} // namespace tests
} // namespace src

int main(int argc, char** argv) {

  src::tests::TEST_initialize_person();
  src::tests::TEST_set_negative_person_id();

  return 0;
}
