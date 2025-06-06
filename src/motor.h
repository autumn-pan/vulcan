#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
    public:
        Motor(double averageThrust, double burnTime, double propellantMass, double burnoutMass);
    private:
        double averageThrust;  // Average thrust produced by the motor (N)
        double burnTime;       // Total burn time of the motor (s)
        double propellantMass; // Mass of the propellant (kg)
        double burnoutMass;    // Mass of the motor after burnout (kg)
};

#endif