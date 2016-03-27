/*!
 * @file
 */

// Copyright Dominic Sears

#include "unistd.h"
#include "PowerTeam.h"
#include "PressureTeam.h"
#include <iostream>

int x;
int y;
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
    pressureTeam cube(block.getPower()/2);
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

    std::cout << "Please enter a new Power Level: ";
    std::cin >> x;
    
    /*!
     * Checks to see if the entered number is between 0 and 20,
     * returning an error if it is false, but continuing the 
     * program if true.
     */
    if (0 > x) {
        std::cout << "ERROR: Not a valid Power Level; must be 0-20" << std::endl; }

    if (x > 20) {
        std::cout << "ERROR: Not a valid Power Level; must be 0-20" << std::endl; }

    block.setPower(x);
    std::cout << "New Power level of Block: " << block.getPower() << "\n";
    cube.setPressure(block.getPower());
    std::cout << "New Pressure level of Cube: " << cube.getPressure() << "\n";

    return 0;
}
