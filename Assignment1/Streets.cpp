#include "stdafx.h"
#include "types.h"
#include "Streets.h"

void drawStreets(void)
{
	drawMagnolia();
	drawWilmoreSt();
	drawMechanic();
	drawEngineering();
}

void drawMagnolia(void)
{
	orderedPair magnoliaEast = { 500.0, 370.0 };
	orderedPair magnoliaWest = { 0.0, 370.0 };

	glBegin(GL_LINES);
	glVertex2fv(magnoliaEast);
	glVertex2fv(magnoliaWest);
	glEnd();
}

void drawWilmoreSt(void)
{
	orderedPair wilmoreNorth = { 274.0, 370.0 };
	orderedPair wilmoreSouth = { 274.0, 225.0 };
	orderedPair wilmoreWest = { 187.0, 225.0 };
	orderedPair wilmoreUp = { 187.0, 260.0 };

	glBegin(GL_LINES);
	glVertex2fv(wilmoreNorth);
	glVertex2fv(wilmoreSouth);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(wilmoreSouth);
	glVertex2fv(wilmoreWest);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(wilmoreWest);
	glVertex2fv(wilmoreUp);
	glEnd();
}

void drawMechanic(void)
{
	orderedPair mechanicSouth1 = { 187.0, 260.0 };
	orderedPair mechanicSouth2 = { 243.0, 260.0 };
	orderedPair mechanicEast1 = { 243.0, 300.0 };
	orderedPair mechanicEast2 = { 274.0, 300.0 };
	orderedPair mechanicNorth1 = { 187.0, 327.0 };
	orderedPair mechanicNorth2 = { 243.0, 327.0 };


	glBegin(GL_LINES);
	glVertex2fv(mechanicSouth1);
	glVertex2fv(mechanicSouth2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(mechanicSouth2);
	glVertex2fv(mechanicEast1);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(mechanicEast1);
	glVertex2fv(mechanicEast2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(mechanicEast1);
	glVertex2fv(mechanicNorth2);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(mechanicNorth1);
	glVertex2fv(mechanicNorth2);
	glEnd();
}

void drawEngineering(void)
{
	orderedPair engineeringNorth = { 365.0, 370.0 };
	orderedPair engineeringSouth = { 365.0, 255.0 };
	orderedPair engineeringSE = { 390.0, 255.0 };
	orderedPair engineeringNE = { 390.0, 310.0 };
	orderedPair engineeringIntersection = { 365.0, 310.0 };

	glBegin(GL_LINES);
	glVertex2fv(engineeringNorth);
	glVertex2fv(engineeringSouth);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(engineeringSouth);
	glVertex2fv(engineeringSE);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(engineeringSE);
	glVertex2fv(engineeringNE);
	glEnd();

	glBegin(GL_LINES);
	glVertex2fv(engineeringNE);
	glVertex2fv(engineeringIntersection);
	glEnd();
}