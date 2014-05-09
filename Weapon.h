//
//  Weapon.h
//  ShipsInSpace
//
//  Created by Katie Cunningham on 5/6/14.
//  Copyright (c) 2014 Katie Cunningham. All rights reserved.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

using namespace std;

class Weapon {
    
	public:
    Weapon(); // Default constructor
    Weapon(string initWeaponName, double initWeaponRange, double initWeaponSpeed,
           double initWeaponCost); // Overloaded constructor
    ~Weapon() {}; // Destructor
    
    string getWeaponName();
    void setWeaponName(string newWeaponName);
    double getWeaponRange();
    void setWeaponRange(double newWeaponRange);
    double getWeaponSpeed();
    void setWeaponSpeed(double newWeaponSpeed);
    double getWeaponCost();
    void setWeaponCost(double newWeaponCost);
    
	private:
    string weaponName;
    double weaponRange;
    double weaponSpeed;
    double weaponCost;
};

#endif