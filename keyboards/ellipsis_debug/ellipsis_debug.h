#ifndef ELLIPSIS_H
#define ELLIPSIS_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT_all( \
        R00, R01, R02, R03, R04, R05, R06, R07, \
        R10, R11, R12, R13, R14, R15, R16, R17, R18, \
   R20, R21, R22, R23, R24, R25, R26, R27, R28, \
   R30, R31, R32, R33, R34, R35, R36, R37, R38, \
        R40, R41, R42, R43, R44,      R45, R46, R48 \
) \
{ \
   { R00, R01, R02, R03, R04, R05, R06, R07, KC_NO }, \
   { R10, R11, R12, R13, R14, R15, R16, R17,   R18 }, \
   { R20, R21, R22, R23, R24, R25, R26, R27,   R28 }, \
   { R30, R31, R32, R33, R34, R35, R36, R37,   R38 }, \
   { R40, R41, R42, R43, R44, R45, R46, KC_NO, R48 } \
}

#endif

