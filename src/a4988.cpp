#include "a4988.h"

const int microstepLookup[7][3] = {
    {0, 0, 0},
    {1, 0, 0},
    {0, 1, 0},
    {1, 1, 0},
    {1, 1, 1},
    {1, 1, 1},
    {1, 1, 1},
};

A4988::A4988(gpio_num_t stepPin, gpio_num_t directionPin)
{
    stepPin_ = stepPin;
    directionPin_ = directionPin;
}

A4988::A4988(gpio_num_t stepPin, gpio_num_t directionPin, int microsteppingMode)
{
    stepPin_ = stepPin;
    directionPin_ = directionPin;
    microsteppingMode_ = microsteppingMode;
}

A4988::A4988(gpio_num_t stepPin,
             gpio_num_t directionPin,
             gpio_num_t enablePin,
             gpio_num_t sleepPin,
             gpio_num_t resetPin,
             gpio_num_t ms1Pin,
             gpio_num_t ms2Pin,
             gpio_num_t ms3Pin)
{
    stepPin_ = stepPin;
    directionPin_ = directionPin;
    enablePin_ = enablePin;
    sleepPin_ = sleepPin;
    resetPin_ = resetPin;
    ms1Pin_ = ms1Pin;
    ms2Pin_ = ms2Pin;
    ms3Pin_ = ms3Pin;
}

A4988::A4988(gpio_num_t stepPin, gpio_num_t directionPin, gpio_num_t enablePin,
             gpio_num_t sleepPin, gpio_num_t resetPin, gpio_num_t ms1Pin,
             gpio_num_t ms2Pin, gpio_num_t ms3Pin, int microsteppingMode)
{
    stepPin_ = stepPin;
    directionPin_ = directionPin;
    enablePin_ = enablePin;
    sleepPin_ = sleepPin;
    resetPin_ = resetPin;
    ms1Pin_ = ms1Pin;
    ms2Pin_ = ms2Pin;
    ms3Pin_ = ms3Pin;
    microsteppingMode_ = microsteppingMode;
}

void A4988::setPins(gpio_num_t stepPin, gpio_num_t directionPin, gpio_num_t enablePin,
                    gpio_num_t sleepPin, gpio_num_t resetPin, gpio_num_t ms1Pin,
                    gpio_num_t ms2Pin, gpio_num_t ms3Pin)
{
    stepPin_ = stepPin;
    directionPin_ = directionPin;
    enablePin_ = enablePin;
    sleepPin_ = sleepPin;
    resetPin_ = resetPin;
    ms1Pin_ = ms1Pin;
    ms2Pin_ = ms2Pin;
    ms3Pin_ = ms3Pin;
}

void A4988::setStepPin(gpio_num_t pin)
{
    stepPin_ = pin;
}

void A4988::setDirectionPin(gpio_num_t pin)
{
    directionPin_ = pin;
}

void A4988::setEnablePin(gpio_num_t pin)
{
    enablePin_ = pin;
}

void A4988::setSleepPin(gpio_num_t pin)
{
    sleepPin_ = pin;
}

void A4988::setResetPin(gpio_num_t pin)
{
    resetPin_ = pin;
}

void A4988::setMs1Pin(gpio_num_t pin)
{
    ms1Pin_ = pin;
}

void A4988::setMs2Pin(gpio_num_t pin)
{
    ms2Pin_ = pin;
}

void A4988::setMs3Pin(gpio_num_t pin)
{
    ms3Pin_ = pin;
}

void A4988::setMicrosteppingMode(int mode)
{
    microsteppingMode_ = mode;
    updateMicrostepping();
}

void A4988::updateMicrostepping()
{
    gpio_set_level(ms1Pin_, microstepLookup[microsteppingMode_][0]);
    gpio_set_level(ms1Pin_, microstepLookup[microsteppingMode_][1]);
    gpio_set_level(ms1Pin_, microstepLookup[microsteppingMode_][2]);
}