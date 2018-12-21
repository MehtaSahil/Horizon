
#include <stdint.h>
#include "Person.hpp"

namespace src {

Person::Person(int32_t new_person_id) {
  if (new_person_id >= 0) {
    person_id = new_person_id;
  }
}

int32_t Person::get_id() {
  return person_id;
}

int32_t Person::set_id(int32_t new_person_id) {

  // personID must be positive
  if (new_person_id < 0) {
    return -1;
  }

  person_id = new_person_id;
  return person_id;
}

} // namespace src
