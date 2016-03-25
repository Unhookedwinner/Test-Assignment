/*!
 * @file
 */

// Copyright Dominic Sears

#include "PowerTeam.h"
#include "PressureTeam.h"
#include <iostream>

/*!
 * The main file uses both the PowerTeam and PressureTeam class
 * and assigns them to different objects, then outputs their respective
 * "getters" as their initial value, then allows the user to input
 * their own decimal and prints the new value of the object's characteristic.
 */

int main(int argc, char* argv[]) {
/*!
 * @param powerTeam Sets the initial power level for block.
 * 
 * @param pressureTeam Sets the initial pressure level for cube,
 * with it being defined as the current power level for block.
 */
    powerTeam block(10.2);
    pressureTeam cube(block.getPower());
/*!
 * @param block.getPower Outputs the current power level for block.
 * 
 * @param cube.getPressure outputs the current pressure level for cube .
 */
    std::cout << "Starting Power level of Block: " << block.getPower() << "\n";
    std::cout << "Starting Pressure level of Cube: ";
    std::cout << cube.getPressure() << "\n";
/*!
 * @param setPower Asks the user to input a new value for power.
 * 
 * @param setPressure returns the current value of power and inputs it as the 
 * new pressure level.
 */
    block.setPower(20.4);
    std::cout << "New Power level of Block: " << block.getPower() << "\n";
    cube.setPressure(block.getPower());
    std::cout << "New Pressure level of Cube: " << cube.getPressure() << "\n";

    return 0;
}
