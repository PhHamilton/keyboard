#include "ledHandler.h"

LedHandler::LedHandler(vector<io_information_t> leds)
{
    _informationLeds = leds;
    _maxDisplayableNumber = _computeMaxDisplayableNumber();
}

uint8_t LedHandler::displayBinaryNumber(uint8_t number)
{
    if(number >= _maxDisplayableNumber)
        return LED_HANDLER_FAULTY_NUMBER;

    

    return LED_HANDLER_OK;
}

uint8_t LedHandler::displayError(void)
{
    return LED_HANDLER_OK;
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
