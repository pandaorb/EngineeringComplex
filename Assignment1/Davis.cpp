#include "stdafx.h"
#include "types.h"
#include "Davis.h"

void drawDavis(void)
{
	drawDavisMain();
	drawDavisSouthWest();
}

void drawDavisMain(void)
{
	orderedPair davisMain1 = { 420.0, 325.0 };
	orderedPair davisMain2 = { 445.0, 325.0 };
	orderedPair davisMain3 = { 445.0, 270.0 };
	orderedPair davisMain4 = { 420.0, 270.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(davisMain1);
	glVertex2fv(davisMain2);
	glVertex2fv(davisMain3);
	glVertex2fv(davisMain4);
	glEnd();
}

void drawDavisSouthWest(void)
{
	orderedPair davisSouthWest1 = { 415.0, 280.0 };
	orderedPair davisSouthWest2 = { 435.0, 280.0 };
	orderedPair davisSouthWest3 = { 435.0, 265.0 };
	orderedPair davisSouthWest4 = { 415.0, 265.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(davisSouthWest1);
	glVertex2fv(davisSouthWest2);
	glVertex2fv(davisSouthWest3);
	glVertex2fv(davisSouthWest4);
	glEnd();
}