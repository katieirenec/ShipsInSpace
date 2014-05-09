//
//  main.cpp
//  ShipsInSpace
//
//  Created by Katie Cunningham on 5/6/14.
//  Copyright (c) 2014 Katie Cunningham. All rights reserved.
//

#include <iostream>
#include "Spacecraft.h"
#include "Weapon.h"

using namespace std;

int main()
{

    // 6. Create an array of 15 Spacecraft instances (in the test file) named
    // "starFighters." Write the code (a loop) to set the type of all instances
    // to "Federation," the maxSpeed to 12.0, the currentSpeed to random values
    // (up to maxSpeed - 2.0) and the currentDirection to 160 + a random number
    // between 0 and 45.
    
    Spacecraft starFighters[15];
    // Note: All elements in starFighters are instantiated with the default
    // constructor
    
    int i;
    for (i=0; i<15; i++ )
    {
        starFighters[i].setType("Federation");
        starFighters[i].setMaxSpeed(12.0);
        starFighters[i].setCurrentSpeed(rand() % int(starFighters[i].getMaxSpeed()-2.0));
        starFighters[i].setCurrentDirection( 160 + rand() % 46);
        // Note: setCurrentDirection() needs to be added to the class definition
    }

    // 9. Write a few lines of code for the driver file that would let the user
    // print out the values in the private member variables of the Weapon class
    // for one of the Spacecraft objects.
    
    Spacecraft thirdFighter = starFighters[2];
    
    cout << "This is information about the weapons on the third star fighter:" << endl;
    
    for (i = 0; i < 10; i++)
    {
        Weapon w = thirdFighter.getWeapon(i);
    
        cout << "Weapon #" << i << endl;
        cout << "Name: " << w.getWeaponName() << endl;
        cout << "Range: " << w.getWeaponRange() << endl;
        cout << "Speed: " << w.getWeaponSpeed() << endl;
        cout << "Cost: " << w.getWeaponCost() << endl;
    }
    
    return 0;
}

