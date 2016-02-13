#include "stdafx.h"
#include "types.h"
#include "Harbert.h"

void drawHarbert(void)
{
	drawHarbertMain();
	drawHarbertDetails();
}

void drawHarbertMain(void)
{
	orderedPair harbertMain1 = { 380.0, 355.0 };
	orderedPair harbertMain2 = { 440.0, 355.0 };
	orderedPair harbertMain3 = { 440.0, 335.0 };
	orderedPair harbertMain4 = { 380.0, 335.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(harbertMain1);
	glVertex2fv(harbertMain2);
	glVertex2fv(harbertMain3);
	glVertex2fv(harbertMain4);
	glEnd();
}

void drawHarbertDetails(void)
{
	orderedPair harbertDetails1 = { 380.0, 357.0 };
	orderedPair harbertDetails2 = { 390.0, 357.0 };
	orderedPair harbertDetails3 = { 390.0, 333.0 };
	orderedPair harbertDetails4 = { 380.0, 333.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(harbertDetails1);
	glVertex2fv(harbertDetails2);
	glVertex2fv(harbertDetails3);
	glVertex2fv(harbertDetails4);
	glEnd();

	orderedPair harbertDetails5 = { 430.0, 357.0 };
	orderedPair harbertDetails6 = { 440.0, 357.0 };
	orderedPair harbertDetails7 = { 440.0, 333.0 };
	orderedPair harbertDetails8 = { 430.0, 333.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(harbertDetails5);
	glVertex2fv(harbertDetails6);
	glVertex2fv(harbertDetails7);
	glVertex2fv(harbertDetails8);
	glEnd();

	orderedPair harbertDetails9 = { 420.0, 357.0 };
	orderedPair harbertDetails10 = { 410.0, 357.0 };
	orderedPair harbertDetails11 = { 410.0, 333.0 };
	orderedPair harbertDetails12 = { 420.0, 333.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(harbertDetails9);
	glVertex2fv(harbertDetails10);
	glVertex2fv(harbertDetails11);
	glVertex2fv(harbertDetails12);
	glEnd();
}