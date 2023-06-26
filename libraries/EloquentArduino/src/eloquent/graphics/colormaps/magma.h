//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Magma {
            public:

                /**
                 * Convert single byte to RGB color
                 * @param x
                 * @param r
                 * @param g
                 * @param b
                 */
                void convert(uint8_t x, uint8_t *r, uint8_t *g, uint8_t *b) {
                    *r = red[x << 2];
                    *g = green[x << 2];
                    *b = blue[x << 2];
                }

            protected:
                uint8_t red[64] = {0, 1, 3, 6, 10, 14, 18, 23, 28, 34, 40, 47, 53, 60, 67, 74, 82, 88, 94, 101, 107, 113, 119, 126, 132, 138, 145, 151, 158, 164, 171, 177, 185, 192, 198, 205, 211, 217, 222, 228, 232, 237, 240, 243, 246, 248, 249, 251, 252, 253, 253, 253, 254, 254, 254, 254, 254, 253, 253, 253, 252, 252, 252, 251};
                uint8_t green[64] = {0, 1, 3, 5, 7, 10, 13, 15, 16, 17, 17, 16, 15, 15, 15, 16, 18, 21, 23, 26, 28, 31, 33, 36, 38, 40, 42, 44, 46, 48, 51, 53, 55, 58, 60, 63, 66, 70, 74, 78, 84, 89, 96, 103, 110, 117, 125, 132, 142, 149, 157, 164, 172, 179, 187, 194, 201, 209, 216, 223, 230, 238, 245, 252};
                uint8_t blue[64] = {3, 9, 17, 25, 34, 42, 51, 60, 70, 80, 89, 98, 106, 113, 117, 121, 124, 126, 127, 128, 128, 129, 129, 129, 129, 129, 128, 127, 126, 125, 124, 122, 120, 117, 115, 112, 109, 106, 103, 100, 97, 95, 93, 91, 91, 92, 93, 96, 99, 103, 107, 112, 117, 123, 128, 134, 141, 147, 154, 161, 168, 176, 183, 191};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Magma magma);