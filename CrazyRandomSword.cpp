/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *        File:	CrazyRandomSword.cpp				     *
 * Description:	CrazyRandomSword class implementation		     *
 *								     *
 *      Author:	William Owenby (wco17)				     *
 *       Class:	CEN 4020.0003					     *
 *  Project #1:	Git and Object Oriented Programming Warm-Up	     *
 *         Due:	02/03/2019					     *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    double damage = hitPoints - (armor - 2);

    if (int(armor)/3 >= 2) {
        int randomArmorIgnore = rand() % (int(armor)/3 - 1) + 2;
        damage = hitPoints - (armor - randomArmorIgnore);
    }

    if (damage < 0) {
        return 0;
    }
    return damage;
}
