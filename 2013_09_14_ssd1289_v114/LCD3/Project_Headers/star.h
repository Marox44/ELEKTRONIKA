/*
 * star.h
 *
 *  Created on: Mar 23, 2013
 *      Author: Sahuc Guillaume
 */

#ifndef STAR_H_
#define STAR_H_

#define NUMSTARS 100 // nombre d'�toiles

typedef struct star{
	UINT8 x; // abscisse de l'�toile
	UINT16 y; // son ordonn�e 
	INT8 speed; // sa vitesse 
	UINT8 last_x; 
	UINT16 last_y;
} star;

static star tabstars[NUMSTARS]; // tableau d'�toiles

void initStars(void);
void viewStar(void);

#endif /* STAR_H_ */
