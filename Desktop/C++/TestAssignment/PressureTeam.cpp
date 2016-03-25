/*!
 * @file
 */

// Copyright Dominic Sears

#include "./PressureTeam.h"

 /*!
 * Creates 3 functions that set, return, and replace the current
 * pressure level.
 *
 * @param pressureTeam Function sets the input as the pressure level.
 *
 * @param setPressure Function sets the new or initial pressure level.
 *
 * @param getPressure Function returns the pressure level as its current
 * double.
 */

pressureTeam::pressureTeam(double inputPressure) {
    pressureLevel = inputPressure;
}

void pressureTeam::setPressure(double pressureSet) {
    pressureLevel = pressureSet;
}

double pressureTeam::getPressure(void) {
    return pressureLevel;
}
