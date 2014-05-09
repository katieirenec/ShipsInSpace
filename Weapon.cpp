//
//  Weapon.cpp
//  ShipsInSpace
//
//  Created by Katie Cunningham on 5/6/14.
//  Copyright (c) 2014 Katie Cunningham. All rights reserved.
//

#include "Weapon.h"

// Default constructor
// By default, weaponName is "Phaser", weaponRange is 10, weaponSpeed is 100 and
// weaponCOst is 10000
Weapon::Weapon()
{
    weaponName = "Phaser";
    weaponRange = 10;
    weaponSpeed = 100;
    weaponCost = 10000;
}

// Overloaded constructor
Weapon::Weapon(string initWeaponName, double initWeaponRange,
               double initWeaponSpeed, double initWeaponCost)
{
    weaponName = initWeaponName;
    weaponRange = initWeaponRange;
    weaponSpeed = initWeaponSpeed;
    weaponCost = initWeaponCost;
}

// Getter function for weaponName
string Weapon::getWeaponName()
{
    return weaponName;
}

// Setter function for weaponName
void Weapon::setWeaponName(string newWeaponName)
{
    weaponName = newWeaponName;
    return;
}

// Getter function for weaponRange
double Weapon::getWeaponRange()
{
    return weaponRange;
}

// Setter function for weaponRange
void Weapon::setWeaponRange(double newWeaponRange)
{
    weaponRange = newWeaponRange;
    return;
}

// Getter function for weaponSpeed
double Weapon::getWeaponSpeed()
{
    return weaponSpeed;
}

// Setter function for weaponSpeed
void Weapon::setWeaponSpeed(double newWeaponSpeed)
{
    weaponSpeed = newWeaponSpeed;
    return;
}

// Getter function for weaponCost
double Weapon::getWeaponCost()
{
    return weaponCost;
}

// Setter function for weaponCost
void Weapon::setWeaponCost(double newWeaponCost)
{
    weaponCost = newWeaponCost;
    return;
}