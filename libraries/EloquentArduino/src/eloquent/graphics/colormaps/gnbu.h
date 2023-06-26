//
// Created by Simone on 18/05/2022.
//

#pragma once
#include "../../macros.h"


namespace Eloquent {
    namespace Graphics {
        namespace Colormaps {
            class GnBu {
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
                uint8_t red[64] = {247, 244, 241, 238, 235, 232, 229, 226, 223, 221, 218, 216, 213, 210, 208, 205, 202, 198, 193, 189, 184, 180, 175, 170, 165, 160, 154, 148, 143, 137, 131, 125, 120, 114, 108, 103, 97, 91, 85, 80, 75, 70, 66, 61, 57, 53, 48, 44, 39, 35, 30, 26, 21, 17, 13, 8, 8, 8, 8, 8, 8, 8, 8, 8};
                uint8_t green[64] = {252, 250, 249, 248, 247, 246, 245, 243, 242, 241, 240, 239, 238, 237, 236, 235, 234, 232, 231, 229, 227, 225, 223, 222, 220, 218, 215, 213, 211, 209, 207, 205, 202, 199, 196, 192, 189, 186, 183, 180, 175, 170, 166, 161, 156, 151, 146, 141, 136, 132, 127, 122, 118, 113, 109, 104, 99, 94, 89, 84, 79, 74, 69, 64};
                uint8_t blue[64] = {240, 237, 234, 232, 229, 226, 224, 221, 218, 215, 213, 210, 207, 204, 201, 199, 196, 194, 192, 190, 188, 186, 184, 182, 181, 183, 185, 187, 189, 191, 193, 195, 196, 198, 200, 202, 204, 206, 208, 210, 209, 206, 203, 201, 198, 196, 193, 190, 188, 186, 183, 181, 179, 176, 174, 172, 167, 161, 156, 150, 145, 139, 134, 129};
            };
        }
    }
}

ELOQUENT_SINGLETON(Eloquent::Graphics::Colormaps::GnBu gnbu);