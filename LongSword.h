/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *        File:	LongSword.h					     *
 * Description:	LongSword class declaration			     *
 *								     *
 *      Author:	William Owenby (wco17)				     *
 *       Class:	CEN 4020.0003					     *
 *  Project #1:	Git and Object Oriented Programming Warm-Up	     *
 *         Due:	02/03/2019					     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <string>
#include "Weapon.h"

#ifndef LONGSWORD_H
#define LONGSWORD_H

/**
 * Defines the behavior of a long sword
 *     hitpoints = 60
 *     ignores 10% of armor points
 */
class LongSword : public Weapon {
public:
    // Calls Weapon(name, hitPoints) constructor with values Long sword and 55.0
    LongSword() : Weapon("Long sword", 60.0) {}

    virtual ~LongSword() {};

    virtual double hit(double armor);

};

#endif /* LONGSWORD_H */
