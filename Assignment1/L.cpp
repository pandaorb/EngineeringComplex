#include "stdafx.h"
#include "types.h"
#include "L.h"

void drawL(void)
{
	drawLSouth();
	drawLEast();
}

void drawLSouth(void)
{
	orderedPair LSouth1 = { 190.0, 255.0 };
	orderedPair LSouth2 = { 250.0, 255.0 };
	orderedPair LSouth3 = { 250.0, 240.0 };
	orderedPair LSouth4 = { 190.0, 240.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(LSouth1);
	glVertex2fv(LSouth2);
	glVertex2fv(LSouth3);
	glVertex2fv(LSouth4);
	glEnd();

	orderedPair LSouth5 = { 190.0, 240.0 };
	orderedPair LSouth6 = { 200.0, 240.0 };
	orderedPair LSouth7 = { 200.0, 235.0 };
	orderedPair LSouth8 = { 190.0, 235.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(LSouth5);
	glVertex2fv(LSouth6);
	glVertex2fv(LSouth7);
	glVertex2fv(LSouth8);
	glEnd();
}

void drawLEast(void)
{
	orderedPair LEast1 = { 250.0, 240.0 };
	orderedPair LEast2 = { 250.0, 290.0 };
	orderedPair LEast3 = { 265.0, 290.0 };
	orderedPair LEast4 = { 265.0, 240.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(LEast1);
	glVertex2fv(LEast2);
	glVertex2fv(LEast3);
	glVertex2fv(LEast4);
	glEnd();

	orderedPair LEast5 = { 248.0, 290.0 };
	orderedPair LEast6 = { 248.0, 275.0 };
	orderedPair LEast7 = { 250.0, 275.0 };
	orderedPair LEast8 = { 250.0, 290.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(LEast5);
	glVertex2fv(LEast6);
	glVertex2fv(LEast7);
	glVertex2fv(LEast8);
	glEnd();
}