#ifndef __IO_CONFIGURATION__
#define __IO_CONFIGURATION__

#define GET_BIT(byte, bitpos) (uint8_t)((byte >> bitpos) & 1); 
#define SET_BIT(bitpos) (1 << bitpos)

#define SET_BIT_AT_ADDRESS(BYTEADDR, BITPOS) ((*BYTEADDR) |= (1ULL<<(BITPOS)))
#define CLR_BIT_AT_ADDRESS(BYTEADDR, BITPOS) ((*BYTEADDR) &= ~(1ULL<<(BITPOS)))
#define TOGGLE_BIT_AT_ADDRESS(BYTEADDR, BITPOS) ((*BYTEADDR) ^= (1ULL<<BITPOS))
#define GET_BIT_AT_ADDRESS(BYTEADDR, BITPOS) ((*BYTEADDR) >> BITPOS) & 1

#define ON 1
#define OFF 0

#define TRUE 1
#define FALSE 0

#endif //IO_CONFIGURATION
