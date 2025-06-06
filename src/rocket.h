#ifndef z
#define ROCKET_H
#include "motor.h"

class Rocket
{
public:
    Rocket(double mass, double moment, Motor * motor);
    void integrate(double dt);

    void launch();
    private: 
        double pos[3];
        double vel[3];
        double acc[3];

        double mass;
        double moment;

        double time;

        Motor * motor;

        double Orientation[4];
        double relativeThrustOrientation[4];

};
#endif