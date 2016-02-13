#include "stdafx.h"
#include "types.h"
#include "Ross.h"

void drawRoss(void)
{
	drawRossMain();
	drawRossMiddle();
}

void drawRossMain(void)
{
	orderedPair rossMain1 = { 330.0, 230.0 };
	orderedPair rossMain2 = { 380.0, 230.0 };
	orderedPair rossMain3 = { 380.0, 200.0 };
	orderedPair rossMain4 = { 330.0, 200.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(rossMain1);
	glVertex2fv(rossMain2);
	glVertex2fv(rossMain3);
	glVertex2fv(rossMain4);
	glEnd();
}

void drawRossMiddle(void)
{
	orderedPair rossMiddle1 = { 340.0, 233.0 };
	orderedPair rossMiddle2 = { 370.0, 233.0 };
	orderedPair rossMiddle3 = { 370.0, 198.0 };
	orderedPair rossMiddle4 = { 340.0, 198.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(rossMiddle1);
	glVertex2fv(rossMiddle2);
	glVertex2fv(rossMiddle3);
	glVertex2fv(rossMiddle4);
	glEnd();

	orderedPair rossMiddle5 = { 350.0, 235.0 };
	orderedPair rossMiddle6 = { 360.0, 235.0 };
	orderedPair rossMiddle7 = { 360.0, 195.0 };
	orderedPair rossMiddle8 = { 350.0, 195.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(rossMiddle5);
	glVertex2fv(rossMiddle6);
	glVertex2fv(rossMiddle7);
	glVertex2fv(rossMiddle8);
	glEnd();
}
