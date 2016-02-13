#include "stdafx.h"
#include "types.h"
#include "Ramsay.h"

void drawRamsay(void)
{
	drawRamsayMain();
	drawRamsayWest();
	drawRamsayEast();
	drawRamsayMiddle();
}

void drawRamsayMain(void)
{
	orderedPair ramsayMain1 = { 280.0, 350.0 };
	orderedPair ramsayMain2 = { 280.0, 335.0 };
	orderedPair ramsayMain3 = { 350.0, 335.0 };
	orderedPair ramsayMain4 = { 350.0, 350.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(ramsayMain1);
	glVertex2fv(ramsayMain2);
	glVertex2fv(ramsayMain3);
	glVertex2fv(ramsayMain4);
	glEnd();
}

void drawRamsayWest(void)
{
	orderedPair ramsayWest1 = { 280.0, 352.0 };
	orderedPair ramsayWest2 = { 290.0, 352.0 };
	orderedPair ramsayWest3 = { 290.0, 325.0 };
	orderedPair ramsayWest4 = { 280.0, 325.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(ramsayWest1);
	glVertex2fv(ramsayWest2);
	glVertex2fv(ramsayWest3);
	glVertex2fv(ramsayWest4);
	glEnd();
}

void drawRamsayEast(void)
{
	orderedPair ramsayEast1 = { 340.0, 352.0 };
	orderedPair ramsayEast2 = { 350.0, 352.0 };
	orderedPair ramsayEast3 = { 350.0, 325.0 };
	orderedPair ramsayEast4 = { 340.0, 325.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(ramsayEast1);
	glVertex2fv(ramsayEast2);
	glVertex2fv(ramsayEast3);
	glVertex2fv(ramsayEast4);
	glEnd();
}

void drawRamsayMiddle(void)
{
	orderedPair ramsayMiddle1 = { 310.0, 352.0 };
	orderedPair ramsayMiddle2 = { 320.0, 352.0 };
	orderedPair ramsayMiddle3 = { 320.0, 333.0 };
	orderedPair ramsayMiddle4 = { 310.0, 333.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(ramsayMiddle1);
	glVertex2fv(ramsayMiddle2);
	glVertex2fv(ramsayMiddle3);
	glVertex2fv(ramsayMiddle4);
	glEnd();
}