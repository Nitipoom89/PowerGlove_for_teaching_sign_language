//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class Reds_r {
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
                uint8_t red[64] = {103, 110, 118, 126, 134, 142, 150, 158, 165, 170, 175, 180, 184, 189, 194, 199, 204, 208, 213, 217, 222, 227, 231, 236, 239, 241, 242, 244, 245, 247, 248, 250, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 255};
                uint8_t green[64] = {0, 1, 3, 5, 7, 9, 11, 13, 15, 16, 17, 18, 19, 20, 22, 23, 25, 29, 34, 38, 42, 47, 51, 56, 61, 67, 73, 79, 85, 91, 97, 103, 108, 113, 118, 123, 128, 133, 139, 144, 149, 154, 159, 164, 170, 175, 180, 185, 190, 195, 199, 204, 209, 214, 218, 223, 226, 228, 231, 234, 237, 239, 242, 245};
                uint8_t blue[64] = {12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 33, 35, 37, 39, 40, 42, 45, 49, 53, 56, 60, 64, 68, 72, 76, 81, 86, 91, 96, 101, 107, 112, 117, 123, 129, 135, 141, 147, 153, 159, 165, 171, 178, 184, 190, 196, 203, 209, 213, 217, 220, 224, 228, 232, 236, 240};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::Reds_r reds_r);