//
//  Spacecraft.h
//  ShipsInSpace
//
//  Created by Katie Cunningham on 5/6/14.
//  Copyright (c) 2014 Katie Cunningham. All rights reserved.
//

#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <iostream>
#include <string>
#include "Weapon.h"

using namespace std;

class Spacecraft
{
	public:
        Spacecraft();
        Spacecraft(string initType); // #3a
        Spacecraft(string initType, double initMaxSpeed); // #3b
        ~Spacecraft() {} // #5
        void setType(string);
        void setMaxSpeed(double);
        void setCurrentSpeed(double newCurrentSpeed)
                                { currentSpeed = newCurrentSpeed; } // #4
        string getType() const { return type; } // #1
        // Note: the const means that in this function, you cannot modify
        // member variables
    
        // These member functions are added to make #6 work
        double getMaxSpeed() { return maxSpeed; }
        void setCurrentDirection(double newCurrentDirection)
                                { currentDirection = newCurrentDirection; }
        // This member function added to make #9 work
        Weapon getWeapon(int i) { return weaponsArray[i]; }
    
	private:
        string type;
        double maxSpeed;
        double currentSpeed;
        double currentDirection;
        Weapon weaponsArray[10];
};

#endif
