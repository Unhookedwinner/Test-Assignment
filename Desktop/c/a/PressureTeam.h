/*!
 * @file
 */

// Copyright Dominic Sears

/*!
 * The PressureTeam class inputs the pressure level
 * of the object, sets the pressure level, and returns the pressure level
 * using 3 different methods/constructors.
 */

#ifndef _HOME_DOMINIC_DESKTOP_C___TESTASSIGNMENT_PRESSURETEAM_H_
#define _HOME_DOMINIC_DESKTOP_C___TESTASSIGNMENT_PRESSURETEAM_H_

class pressureTeam {
 public:
/*!
 * Receives the input Pressure for the Pressure Level.
 */
    explicit pressureTeam(double inputPressure);
/*!
 * Sets the stated double as the Pressure Level.
 */
    void setPressure(double pressureSet);
/*!
 * Retrieves the Pressure Level, as well as sets the initial PL as nothing.
 */
    double getPressure(void);
 private:
    double pressureLevel;
};

#endif  // _HOME_DOMINIC_DESKTOP_C___TESTASSIGNMENT_PRESSURETEAM_H_
