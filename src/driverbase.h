#ifndef DFC81858_4467_4E2F_8BAE_756ECC6F6444
#define DFC81858_4467_4E2F_8BAE_756ECC6F6444

#define STEPDIR_CLOCKWISE 0
#define STEPDIR_COUNTERCLOCKWISE 1

#define MICROSTEP_1 0
#define MICROSTEP_2 1
#define MICROSTEP_4 2
#define MICROSTEP_8 3
#define MICROSTEP_16 4
// No driver capable of 32/64 microsteps has been implemented yet
// #define MICROSTEP_32 5
// #define MICROSTEP_64 6

class DriverBase
{
public:
    virtual void stepOnce();
    virtual void stepOnce(int direction);

    virtual void step(int times);
    virtual void step(int times, int direction);
    virtual void step(int times, int direction, int duration);

    virtual void turn(float angle);
    virtual void turn(float angle, int direction);
    virtual void turn(float angle, int direction, int duration);

    virtual void init();

    int direction();
    void setDirection(int direction);

    int minStepTime();
    void setMinStepTime(int minStepTime);

    int stepsPerRotation();
    void setStepsPerRotation(int stepsPerRotation);

    int stepAngle();
    void setStepAngle(int stepAngle);

protected:
    int direction_;
    int minStepTime_;
    int stepsPerRotation_;
};

#endif /* DFC81858_4467_4E2F_8BAE_756ECC6F6444 */
