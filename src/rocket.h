#ifndef ROCKET_H
#define ROCKET_H
class Rocket
{
public:
    Rocket();

    private: 
        double pos[3];
        double vel[3];
        double acc[3];

        double mass;
        double moment;
        double thrust;
        double fuel;
        double burnRate;
        double dragCoefficient;
        double area;
        double time;

        double Orientation[4];
        double relativeThrustOrientation[4];

};
#endif