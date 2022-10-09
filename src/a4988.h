#ifndef AFA664BE_8E27_4C4E_A86C_18649F25B8A0
#define AFA664BE_8E27_4C4E_A86C_18649F25B8A0
#include "driverbase.h"
#include "driver/gpio.h"

class A4988 : DriverBase
{
public:
    A4988(gpio_num_t stepPin,
          gpio_num_t directionPin);

    A4988(gpio_num_t stepPin,
          gpio_num_t directionPin,
          int microsteppingMode);

    A4988(gpio_num_t stepPin,
          gpio_num_t directionPin,
          gpio_num_t enablePin,
          gpio_num_t sleepPin,
          gpio_num_t resetPin,
          gpio_num_t ms1Pin,
          gpio_num_t ms2Pin,
          gpio_num_t ms3Pin);

    A4988(gpio_num_t stepPin,
          gpio_num_t directionPin,
          gpio_num_t enablePin,
          gpio_num_t sleepPin,
          gpio_num_t resetPin,
          gpio_num_t ms1Pin,
          gpio_num_t ms2Pin,
          gpio_num_t ms3Pin,
          int microsteppingMode);

    void setPins(gpio_num_t stepPin, gpio_num_t directionPin);

    void setPins(gpio_num_t stepPin,
                 gpio_num_t directionPin,
                 gpio_num_t enablePin,
                 gpio_num_t sleepPin,
                 gpio_num_t resetPin,
                 gpio_num_t ms1Pin,
                 gpio_num_t ms2Pin,
                 gpio_num_t ms3Pin);

    void setStepPin(gpio_num_t pin);
    void setDirectionPin(gpio_num_t pin);
    void setEnablePin(gpio_num_t pin);
    void setSleepPin(gpio_num_t pin);
    void setResetPin(gpio_num_t pin);
    void setMs1Pin(gpio_num_t pin);
    void setMs2Pin(gpio_num_t pin);
    void setMs3Pin(gpio_num_t pin);

    void setMicrosteppingMode(int mode);

    void updateMicrostepping();

    void stepOnce();
    void stepOnce(int direction);

    void step(int times);
    void step(int times, int direction);
    void step(int times, int direction, int duration);

    void turn(float angle);
    void turn(float angle, int direction);
    void turn(float angle, int direction, int duration);

    void initialize();

private:
    gpio_num_t stepPin_;
    gpio_num_t directionPin_;
    gpio_num_t enablePin_;
    gpio_num_t sleepPin_;
    gpio_num_t resetPin_;
    gpio_num_t ms1Pin_;
    gpio_num_t ms2Pin_;
    gpio_num_t ms3Pin_;
    int microsteppingMode_ = 1;
    const int c_minimumStepActivationTime = 2;
};

#endif /* AFA664BE_8E27_4C4E_A86C_18649F25B8A0 */
