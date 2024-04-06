#ifndef __DIGITAL_IO_CONTROLLER_H__
#define __DIGITAL_IO_CONTROLLER_H__

#include <stdint.h>

typedef struct
{
    uint8_t *DDR;
    uint8_t *PORT;
    uint8_t *PIN;
    uint8_t BIT;
}io_information_t;

class DigitalIOController
{
    public:
        DigitalIOController(io_information_t ioInfo);
        void initialize(void);
        void turnOn(void);
        void turnOff(void);
        void toggle(void);
        uint8_t getState(void);

    private:
        io_information_t _ioInfo;
        uint8_t _isInitialized;
        uint8_t _state;
};

#endif //__DIGITAL_IO_CONTROLLER_H__
