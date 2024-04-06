#ifndef __LED_HANDLER_H__
#define __LED_HANDLER_H__

#include <vector>
#include "digitalIOController.h"

typedef enum
{
    SOMETHING_FAILED
}error_codes_t;

using namespace std;
class LedHandler
{
    public:
        explicit LedHandler(vector<io_information_t> informationLeds);

        uint8_t displayBinaryNumber(uint8_t number);
        uint8_t displayError(void);
    private:
        uint8_t _nInformationLeds;
        uint8_t _maxDisplayableNumber;
        uint8_t _errorLed;
        vector<io_information_t> _informationLeds;

        uint8_t _computeMaxDisplayableNumber(void);
};
#endif //__LED_HANDLER_H__
