
#include <stdint.h>
#include "Person.hpp"

namespace src {

int32_t Person::getID() {
  return personID;
}

int32_t Person::setID(int32_t newPersonID) {
  personID = newPersonID;
  return personID;
}

} // namespace src
