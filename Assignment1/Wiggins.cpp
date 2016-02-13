#include "stdafx.h"
#include "types.h"
#include "Wiggins.h"

void drawWiggins(void)
{
	drawWigginsNorth();
	drawWigginsSouth();
	drawWigginsWest();
	drawWigginsEast();
}

void drawWigginsNorth(void)
{
	orderedPair wigginsNorth1 = { 30.0, 280.0 };
	orderedPair wigginsNorth2 = { 70.0, 280.0 };
	orderedPair wigginsNorth3 = { 70.0, 240.0 };
	orderedPair wigginsNorth4 = { 30.0, 240.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(wigginsNorth1);
	glVertex2fv(wigginsNorth2);
	glVertex2fv(wigginsNorth3);
	glVertex2fv(wigginsNorth4);
	glEnd();
}

void drawWigginsSouth(void)
{
	orderedPair wigginsSouth1 = { 40.0, 240.0 };
	orderedPair wigginsSouth2 = { 60.0, 240.0 };
	orderedPair wigginsSouth3 = { 60.0, 230.0 };
	orderedPair wigginsSouth4 = { 40.0, 230.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(wigginsSouth1);
	glVertex2fv(wigginsSouth2);
	glVertex2fv(wigginsSouth3);
	glVertex2fv(wigginsSouth4);
	glEnd();
}

void drawWigginsWest(void)
{
	orderedPair wigginsWest1 = { 20.0, 282.0 };
	orderedPair wigginsWest2 = { 30.0, 282.0 };
	orderedPair wigginsWest3 = { 30.0, 238.0 };
	orderedPair wigginsWest4 = { 20.0, 238.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(wigginsWest1);
	glVertex2fv(wigginsWest2);
	glVertex2fv(wigginsWest3);
	glVertex2fv(wigginsWest4);
	glEnd();
}

void drawWigginsEast(void)
{
	orderedPair wigginsEast1 = { 70.0, 282.0 };
	orderedPair wigginsEast2 = { 80.0, 282.0 };
	orderedPair wigginsEast3 = { 80.0, 238.0 };
	orderedPair wigginsEast4 = { 70.0, 238.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(wigginsEast1);
	glVertex2fv(wigginsEast2);
	glVertex2fv(wigginsEast3);
	glVertex2fv(wigginsEast4);
	glEnd();
}