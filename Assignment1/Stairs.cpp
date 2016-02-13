#include "stdafx.h"
#include "types.h"
#include "Stairs.h"

void drawStairs(void)
{
	drawShelbyStairs();
	drawFountainStairs();
}

void drawShelbyStairs(void)
{
	orderedPair shelbyTop1 = { 80.0, 295.0 };
	orderedPair shelbyTop2 = { 90.0, 295.0 };
	orderedPair shelbyMid1 = { 82.0, 293.0 };
	orderedPair shelbyMid2 = { 88.0, 293.0 };
	orderedPair shelbyBottom1 = { 84.0, 291.0 };
	orderedPair shelbyBottom2 = { 86.0, 291.0 };

	glBegin(GL_LINES);
	glVertex2fv(shelbyTop1);
	glVertex2fv(shelbyTop2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(shelbyMid1);
	glVertex2fv(shelbyMid2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(shelbyBottom1);
	glVertex2fv(shelbyBottom2);
	glEnd();
}

void drawFountainStairs(void)
{
	orderedPair fountainTop1 = { 155.0, 295.0 };
	orderedPair fountainTop2 = { 155.0, 285.0 };
	orderedPair fountainMid1 = { 157.0, 293.0 };
	orderedPair fountainMid2 = { 157.0, 287.0 };
	orderedPair fountainBottom1 = { 159.0, 291.0 };
	orderedPair fountainBottom2 = { 159.0, 289.0 };

	glBegin(GL_LINES);
	glVertex2fv(fountainTop1);
	glVertex2fv(fountainTop2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(fountainMid1);
	glVertex2fv(fountainMid2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(fountainBottom1);
	glVertex2fv(fountainBottom2);
	glEnd();
}