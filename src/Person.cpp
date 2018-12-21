
#include <stdint.h>
#include "Person.hpp"

namespace src {

Person::Person(int32_t new_person_id) {
  // TODO: Create custom exception to throw here
  // TODO: Avoid silent failure of initialization
  if (new_person_id >= 0) {
    person_id = new_person_id;
  }
}

int32_t Person::get_id() {
  return person_id;
}

} // namespace src
