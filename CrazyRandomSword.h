/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *        File:	CrazyRandomSword.h				     *
 * Description:	CrazyRandomSword class declaration		     *
 *								     *
 *      Author:	William Owenby (wco17)				     *
 *       Class:	CEN 4020.0003					     *
 *  Project #1:	Git and Object Oriented Programming Warm-Up	     *
 *         Due:	02/03/2019					     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword
 *     hitpoints = random integer between 7 and 100, inclusive
 *     will ignore random integer of armor points between 2 and armor/3, inclusive
 *         so long as int(armor)/3 >= 2, otherwise will ignore 2 armor points
 */
class CrazyRandomSword : public Weapon {
public:
    // Calls Weapon(name, hitPoints) constructor with values Crazy sword and rand() % 93 + 7
    CrazyRandomSword() : Weapon("Crazy random sword", rand() % 93 + 7) {}

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

