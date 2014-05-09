//
//  Spacecraft.cpp
//  CSS 2A - Review for Classes Quiz
//  Answers by Katie – Unofficial until checked by instructor
//
//  Created by Katie Cunningham on 5/6/14.
//  Copyright (c) 2014 Katie Cunningham. All rights reserved.
//

#include "Spacecraft.h"
#include <string>

using namespace std;

Spacecraft::Spacecraft()
{
	type = "";
	maxSpeed = 0;
	currentSpeed = 0;
	currentDirection = 0;
}

// #3a
Spacecraft::Spacecraft(string initType)
{
	type = initType;
	maxSpeed = 0;
	currentSpeed = 0;
	currentDirection = 0;
}

// #3b
Spacecraft::Spacecraft(string initType, double initMaxSpeed)
{
	type = initType;
	maxSpeed = initMaxSpeed;
	currentSpeed = 0;
	currentDirection = 0;
}

// # 2
void Spacecraft::setMaxSpeed(double newMaxSpeed)
{
	maxSpeed = newMaxSpeed;
}

// # 2
void Spacecraft::setType(string newType)
{
	type = newType;
}

