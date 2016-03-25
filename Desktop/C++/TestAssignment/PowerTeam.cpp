/*!
 * @file
 */

// Copyright Dominic Sears

#include "./PowerTeam.h"

/*!
 * Creates 3 functions that set, return, and replace the current
 * power level.
 *
 * @param powerTeam Function sets the input as the power level.
 *
 * @param setPower Function sets the new or initial power level.
 *
 * @param getPower Function returns the power level as its current
 * double.
 */

powerTeam::powerTeam(double inputPower) {
    powerLevel = inputPower;
}

void powerTeam::setPower(double powerSet) {
    powerLevel = powerSet;
}

double powerTeam::getPower(void) {
    return powerLevel;
}
