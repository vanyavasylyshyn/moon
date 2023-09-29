//
// Created by Work on 29.09.2023.
//

#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

namespace moon::maths {
    inline float toRadians(float degrees)
    {
        return degrees * (M_PI / 180.0f);
    }
}
