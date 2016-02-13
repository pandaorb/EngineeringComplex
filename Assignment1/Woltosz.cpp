#include "stdafx.h"
#include "types.h"
#include "Woltosz.h"

void drawWoltosz(void)
{
	drawWoltoszNorth();
	drawWoltoszSouth();
	drawWoltoszWest();
	drawWoltoszEast();
}

void drawWoltoszNorth(void)
{
	orderedPair woltoszNorth1 = { 100.0, 280.0 };
	orderedPair woltoszNorth2 = { 140.0, 280.0 };
	orderedPair woltoszNorth3 = { 140.0, 240.0 };
	orderedPair woltoszNorth4 = { 100.0, 240.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(woltoszNorth1);
	glVertex2fv(woltoszNorth2);
	glVertex2fv(woltoszNorth3);
	glVertex2fv(woltoszNorth4);
	glEnd();
}

void drawWoltoszSouth(void)
{
	orderedPair woltoszSouth1 = { 110.0, 240.0 };
	orderedPair woltoszSouth2 = { 130.0, 240.0 };
	orderedPair woltoszSouth3 = { 130.0, 235.0 };
	orderedPair woltoszSouth4 = { 110.0, 235.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(woltoszSouth1);
	glVertex2fv(woltoszSouth2);
	glVertex2fv(woltoszSouth3);
	glVertex2fv(woltoszSouth4);
	glEnd();
}

void drawWoltoszWest(void)
{
	orderedPair woltoszWest1 = { 90.0, 282.0 };
	orderedPair woltoszWest2 = { 100.0, 282.0 };
	orderedPair woltoszWest3 = { 100.0, 238.0 };
	orderedPair woltoszWest4 = { 90.0, 238.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(woltoszWest1);
	glVertex2fv(woltoszWest2);
	glVertex2fv(woltoszWest3);
	glVertex2fv(woltoszWest4);
	glEnd();
}

void drawWoltoszEast(void)
{
	orderedPair woltoszEast1 = { 140.0, 282.0 };
	orderedPair woltoszEast2 = { 150.0, 282.0 };
	orderedPair woltoszEast3 = { 150.0, 238.0 };
	orderedPair woltoszEast4 = { 140.0, 238.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(woltoszEast1);
	glVertex2fv(woltoszEast2);
	glVertex2fv(woltoszEast3);
	glVertex2fv(woltoszEast4);
	glEnd();
}