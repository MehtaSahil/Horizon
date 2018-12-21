#include <stdint.h>

namespace src {

class Person {
  public:

    Person(int32_t new_person_id);

    // Returns personID. Returns -1 if personID has not been set yet (error)
    int32_t get_id();

  private:
    int32_t person_id = -1;
};

} // namespace src
