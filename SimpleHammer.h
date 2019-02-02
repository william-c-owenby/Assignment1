/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *        File:	SimpleHammer.h					     *
 * Description:	SimpleHammer class declaration			     *
 *								     *
 *      Author:	William Owenby (wco17)				     *
 *       Class:	CEN 4020.0003					     *
 *  Project #1:	Git and Object Oriented Programming Warm-Up	     *
 *         Due:	02/03/2019					     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer
 *     hitpoints = 25
 *     if armor < 30, hammer will ignore all armor points
 */
class SimpleHammer : public Weapon {
public:

    // Calls Weapon(name, hitpoints) constructor with values Simple hammer and 25.0
    SimpleHammer() : Weapon("Simple hammer", 25.0) {}

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

