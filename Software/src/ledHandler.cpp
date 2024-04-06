#include "ledHandler.h"

LedHandler::LedHandler(vector<io_information_t> informationLeds)
{
    _informationLeds = informationLeds;
}

uint8_t LedHandler::displayBinaryNumber(uint8_t number)
{
    return 0;
}

uint8_t LedHandler::displayError(void)
{
    return 0;
}

uint8_t LedHandler::_computeMaxDisplayableNumber(void)
{
    uint8_t maxNumber = 0;
    for(uint8_t i = 0; i < _informationLeds.size(); i++)
    {
        maxNumber *= 2 * (i+1);
    }
    return maxNumber - 1;
}
