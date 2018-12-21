#include <stdint.h>

namespace src {

class Person {
  public:

    // Returns personID. Returns -1 if personID has not been set yet (error)
    int32_t getID();

    // Returns the ID after setting. Returns -1 if setting failed.
    int32_t setID(int32_t personID);

  private:
    int32_t personID = -1;
};

} // namespace src
