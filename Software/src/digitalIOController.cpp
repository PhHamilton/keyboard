#include "digitalIOController.h"
#include "IOConfiguration.h"

DigitalIOController::DigitalIOController(io_information_t ioInfo)
{
    _ioInfo = ioInfo;
}

void DigitalIOController::initialize(void)
{
    SET_BIT_AT_ADDRESS(_ioInfo.DDR, _ioInfo.BIT);
    _isInitialized = 1;
}

void DigitalIOController::turnOn(void)
{
    SET_BIT_AT_ADDRESS(_ioInfo.PORT, _ioInfo.BIT);
}

void DigitalIOController::turnOff(void)
{
    CLR_BIT_AT_ADDRESS(_ioInfo.PORT, _ioInfo.BIT);
}

void DigitalIOController::toggle(void)
{
    TOGGLE_BIT_AT_ADDRESS(_ioInfo.PORT, _ioInfo.BIT);
}

uint8_t DigitalIOController::getState(void)
{
    return GET_BIT_AT_ADDRESS(_ioInfo.PIN, _ioInfo.BIT);
}
