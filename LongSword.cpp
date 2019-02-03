/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *        File:	LongSword.cpp					     *
 * Description:	LongSword class implementation			     *
 *								     *
 *      Author:	William Owenby (wco17)				     *
 *       Class:	CEN 4020.0003					     *
 *  Project #1:	Git and Object Oriented Programming Warm-Up	     *
 *         Due:	02/03/2019					     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "LongSword.h"

double LongSword::hit(double armor) {
    double damage = hitPoints - (armor * 0.9);

    if (damage < 0) {
        return 0;
    }
    return damage;
}
