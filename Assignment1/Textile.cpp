#include "stdafx.h"
#include "types.h"
#include "Textile.h"

void drawTextile(void)
{
	drawTextileMain();
	drawTextileNorth();
	drawTextileSouth();
	drawTextileWest();
}

void drawTextileMain(void)
{
	orderedPair textileMain1 = { 190.0, 350.0 };
	orderedPair textileMain2 = { 190.0, 335.0 };
	orderedPair textileMain3 = { 265.0, 335.0 };
	orderedPair textileMain4 = { 265.0, 350.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(textileMain1);
	glVertex2fv(textileMain2);
	glVertex2fv(textileMain3);
	glVertex2fv(textileMain4);
	glEnd();
};

void drawTextileNorth(void)
{
	orderedPair textileNorth1 = { 195.0, 350.0 };
	orderedPair textileNorth2 = { 195.0, 352.0 };
	orderedPair textileNorth3 = { 205.0, 352.0 };
	orderedPair textileNorth4 = { 205.0, 350.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(textileNorth1);
	glVertex2fv(textileNorth2);
	glVertex2fv(textileNorth3);
	glVertex2fv(textileNorth4);
	glEnd();

	orderedPair textileNorth5 = { 222.5, 350.0 };
	orderedPair textileNorth6 = { 222.5, 352.0 };
	orderedPair textileNorth7 = { 232.5, 352.0 };
	orderedPair textileNorth8 = { 232.5, 350.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(textileNorth5);
	glVertex2fv(textileNorth6);
	glVertex2fv(textileNorth7);
	glVertex2fv(textileNorth8);
	glEnd();

	orderedPair textileNorth9 = { 260.0, 350.0 };
	orderedPair textileNorth10 = { 260.0, 352.0 };
	orderedPair textileNorth11 = { 250.0, 352.0 };
	orderedPair textileNorth12 = { 250.0, 350.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(textileNorth9);
	glVertex2fv(textileNorth10);
	glVertex2fv(textileNorth11);
	glVertex2fv(textileNorth12);
	glEnd();
}

void drawTextileSouth(void)
{
	orderedPair textileSouth1 = { 224.5, 335.0 };
	orderedPair textileSouth2 = { 224.5, 330.0 };
	orderedPair textileSouth3 = { 230.5, 330.0 };
	orderedPair textileSouth4 = { 230.5, 335.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(textileSouth1);
	glVertex2fv(textileSouth2);
	glVertex2fv(textileSouth3);
	glVertex2fv(textileSouth4);
	glEnd();
}

void drawTextileWest(void)
{
	orderedPair textileWest1 = { 190.0, 347.0 };
	orderedPair textileWest2 = { 190.0, 339.0 };
	orderedPair textileWest3 = { 188.0, 339.0 };
	orderedPair textileWest4 = { 188.0, 347.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(textileWest1);
	glVertex2fv(textileWest2);
	glVertex2fv(textileWest3);
	glVertex2fv(textileWest4);
	glEnd();
}