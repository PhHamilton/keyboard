#ifndef __KEYMAP_H__
#define __KEYMAP_H__

#define N_ROWS 4
#define N_COLS 5
#define N_LAYERS 1;

const uint8_t keymap[N_LAYERS][N_ROWS][N_COLS] =
{
    // Layer 0
    {
     {'q', 'w', 'e', 'r', 't'},
     {'a', 's', 'd', 'f', 'g'},
     {'z', 'x', 'c', 'v', 'b'},
     {'X', 'X', 'X', 0x2C, 0x80}, //(0x2c, 0x80) -> (space, shift)
    },
    // Layer 1
    {
     {'q', 'W', 'E', 'R', 'T'},
     {'A', 'S', 'D', 'F', 'G'},
     {'Z', 'X', 'C', 'V', 'B'},
     {'X', 'X', 'X', 'Y', 'Y'},
    }

};



#endif //__KEYMAP_H__
