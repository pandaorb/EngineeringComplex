#include "stdafx.h"
#include "types.h"
#include "Wilmore.h"

void drawWilmore(void)
{
	drawWilmoreMain();
	drawWilmoreEastWest();
	drawWilmoreNorthSouth();
}

void drawWilmoreMain(void)
{
	orderedPair wilmoreMain1 = { 290.0, 310.0 };
	orderedPair wilmoreMain2 = { 290.0, 255.0 };
	orderedPair wilmoreMain3 = { 340.0, 255.0 };
	orderedPair wilmoreMain4 = { 340.0, 310.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(wilmoreMain1);
	glVertex2fv(wilmoreMain2);
	glVertex2fv(wilmoreMain3);
	glVertex2fv(wilmoreMain4);
	glEnd();
}

void drawWilmoreEastWest(void)
{
	orderedPair wilmoreEastWest1 = { 280.0, 300.0 };
	orderedPair wilmoreEastWest2 = { 280.0, 265.0 };
	orderedPair wilmoreEastWest3 = { 350.0, 265.0 };
	orderedPair wilmoreEastWest4 = { 350.0, 300.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(wilmoreEastWest1);
	glVertex2fv(wilmoreEastWest2);
	glVertex2fv(wilmoreEastWest3);
	glVertex2fv(wilmoreEastWest4);
	glEnd();
}

void drawWilmoreNorthSouth(void)
{
	orderedPair wilmoreNorthSouth1 = { 310.0, 311.0 };
	orderedPair wilmoreNorthSouth2 = { 310.0, 254.0 };
	orderedPair wilmoreNorthSouth3 = { 320.0, 254.0 };
	orderedPair wilmoreNorthSouth4 = { 320.0, 311.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(wilmoreNorthSouth1);
	glVertex2fv(wilmoreNorthSouth2);
	glVertex2fv(wilmoreNorthSouth3);
	glVertex2fv(wilmoreNorthSouth4);
	glEnd();
}