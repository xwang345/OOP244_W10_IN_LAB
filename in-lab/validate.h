//#ifndef ICT_VALIDATE_H__
//#define ICT_VALIDATE_H__
//#include <iostream>
//
//namespace ict {
//    template <typename vali>
//    bool validate(const vali& minimum, const vali& maximum, const vali* value, int elements, bool* bools) {
//        for (int i = 0; i < elements; i++) {
//            if (value[i] >= minimum && value[i] <= maximum) {
//                bools[i] = true;
//            }
//            else {
//                bools[i] = false;
//                //valid = false;
//                return 0;
//            }
//        }
//
//        return 1;
//    }
//}
//
//
//#endif // !SICT_VALIDATE_H__

#ifndef ICT_VALIDATE_H__
#define ICT_VALIDATE_H__
#include <iostream>

namespace ict {
    template <typename T>
    bool validate(const T& min, const T& max, const T* testValue, int n, bool* B) {
        bool valid = true;
        for (int i = 0; i < n; i++) {
            if (testValue[i] >= min && testValue[i] <= max) {
                B[i] = true;
            }
            else {
                B[i] = false;
                valid = false;
            }
        }

        //for (int j = 0; j < n; j++) {
        //  if (B[j] = false) {
        //    valid = false;
        //  }
        //}
        return valid;
    }
}


#endif // !SICT_VALIDATE_H__
