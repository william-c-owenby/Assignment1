/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *        File:	SimpleHammer.cpp				     *
 * Description:	SimpleHammer class implementation		     *
 *								     *
 *      Author:	William Owenby (wco17)				     *
 *       Class:	CEN 4020.0003					     *
 *  Project #1:	Git and Object Oriented Programming Warm-Up	     *
 *         Due:	02/03/2019					     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage = hitPoints - armor;
    if (armor < 30) {
        damage = hitPoints;
    }

    if (damage < 0) {
        return 0;
    }
    return damage;
}
