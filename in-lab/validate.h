#ifndef ICT_VALIDATE_H__
#define ICT_VALIDATE_H__
#include <iostream>

namespace ict {
    template <typename vali>
    bool validate(const vali& minimum, const vali& maximum, const vali* value, int elements, bool* bools) {
        for (int i = 0; i < elements; i++) {
            if (value[i] >= minimum && value[i] <= maximum) {
                bools[i] = true;
            }
            else {
                bools[i] = false;
                //valid = false;
                return 0;
            }
        }

        return 1;
    }
}


#endif // !SICT_VALIDATE_H__
