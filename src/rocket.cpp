#include "rocket.h"
#include "motor.h"

Rocket::Rocket(double mass, double moment, Motor * motor)
{
    this->mass = mass;
    this->moment = moment;
    this->motor = motor;
}

void Rocket::integrate(double dt)
{
    // integrate linear motion
    for (int i = 0; i < 3; i++)
    {
        pos[i] += vel[i]*dt + 0.5*acc[i]*dt*dt;
        vel[i] += acc[i]*dt;
        // acc = acc
        
    }
}