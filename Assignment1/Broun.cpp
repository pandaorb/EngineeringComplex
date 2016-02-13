#include "stdafx.h"
#include "types.h"
#include "Broun.h"

void drawBroun(void)
{
	drawBrownNorth();
	drawBrounEast();
	drawBrounWest();
}

void drawBrownNorth(void)
{
	orderedPair brounNorth1 = { 120.0, 190.0 };
	orderedPair brounNorth2 = { 120.0, 220.0 };
	orderedPair brounNorth3 = { 165.0, 220.0 };
	orderedPair brounNorth4 = { 165.0, 190.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(brounNorth1);
	glVertex2fv(brounNorth2);
	glVertex2fv(brounNorth3);
	glVertex2fv(brounNorth4);
	glEnd();
}

void drawBrounWest(void)
{
	orderedPair brounWest1 = { 110.0, 200.0 };
	orderedPair brounWest2 = { 135.0, 200.0 };
	orderedPair brounWest3 = { 135.0, 175.0 };
	orderedPair brounWest4 = { 110.0, 175.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(brounWest1);
	glVertex2fv(brounWest2);
	glVertex2fv(brounWest3);
	glVertex2fv(brounWest4);
	glEnd();
}

void drawBrounEast(void)
{
	// This is an awkward ploygon.
	orderedPair brounEast1 = { 138, 200.0 };
	orderedPair brounEast2 = { 165.0, 200.0 };
	orderedPair brounEast4 = { 141.0, 170.0 };
	orderedPair brounEast3 = { 163.0, 170.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(brounEast1);
	glVertex2fv(brounEast2);
	glVertex2fv(brounEast3);
	glVertex2fv(brounEast4);
	glEnd();
}