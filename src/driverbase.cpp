#include "driverbase.h"
#include <cmath>

int DriverBase::direction()
{
    return direction_;
}

void DriverBase::setDirection(int direction)
{
    direction_ = direction;
}

int DriverBase::minStepTime()
{
    return minStepTime_;
}

void DriverBase::setMinStepTime(int minStepTime)
{

    minStepTime_ = minStepTime;
}

int DriverBase::stepsPerRotation()
{
    return stepsPerRotation_;
}

void DriverBase::setStepsPerRotation(int stepsPerRotation)
{

    stepsPerRotation_ = stepsPerRotation;
}

int DriverBase::stepAngle()
{
    return 360. / stepsPerRotation_;
}

void DriverBase::setStepAngle(int stepAngle)
{
    // If you are here to wonder, why floor: So it's predictable
    // If you just got a motor with 361 degrees step angle and are wondering
    // why it's not working: Fork the library and change it, or get a motor.
    // I don't think this is a realistic problem, as most motors hopefully
    // have an integer number of steps per rotation, this is just a helper
    // method if you like to provide angles in configs or whatever and don't
    // stepsPerRotation_ = int(360 / stepAngle);
    stepsPerRotation_ = std::floor(360 / stepAngle);
}