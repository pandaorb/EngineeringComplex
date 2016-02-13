#include "stdafx.h"
#include "types.h"
#include "Shops.h"

void drawShops(void)
{
	drawShopsNorth();
	drawShopsMiddle();
	drawShopsSouth();
	drawShopsEast();
}

void drawShopsNorth(void)
{
	orderedPair shopsNorth1 = { 200.0, 322.0 };
	orderedPair shopsNorth2 = { 230.0, 322.0 };
	orderedPair shopsNorth3 = { 230.0, 308.0 };
	orderedPair shopsNorth4 = { 200.0, 308.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shopsNorth1);
	glVertex2fv(shopsNorth2);
	glVertex2fv(shopsNorth3);
	glVertex2fv(shopsNorth4);
	glEnd();
}

void drawShopsMiddle(void)
{
	orderedPair shopsMiddle1 = { 200.0, 302.0 };
	orderedPair shopsMiddle2 = { 230.0, 302.0 };
	orderedPair shopsMiddle3 = { 230.0, 288.0 };
	orderedPair shopsMiddle4 = { 200.0, 288.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shopsMiddle1);
	glVertex2fv(shopsMiddle2);
	glVertex2fv(shopsMiddle3);
	glVertex2fv(shopsMiddle4);
	glEnd();
}

void drawShopsSouth(void)
{
	orderedPair shopsSouth1 = { 200.0, 282.0 };
	orderedPair shopsSouth2 = { 230.0, 282.0 };
	orderedPair shopsSouth3 = { 230.0, 268.0 };
	orderedPair shopsSouth4 = { 200.0, 268.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shopsSouth1);
	glVertex2fv(shopsSouth2);
	glVertex2fv(shopsSouth3);
	glVertex2fv(shopsSouth4);
	glEnd();

	orderedPair shopsSouth5 = { 207.0, 268.0 };
	orderedPair shopsSouth6 = { 214.0, 268.0 };
	orderedPair shopsSouth7 = { 214.0, 266.0 };
	orderedPair shopsSouth8 = { 207.0, 266.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shopsSouth5);
	glVertex2fv(shopsSouth6);
	glVertex2fv(shopsSouth7);
	glVertex2fv(shopsSouth8);
	glEnd();
}

void drawShopsEast(void)
{
	orderedPair shopsEast1 = { 230.0, 322.0 };
	orderedPair shopsEast2 = { 230.0, 268.0 };
	orderedPair shopsEast3 = { 237.0, 268.0 };
	orderedPair shopsEast4 = { 237.0, 322.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shopsEast1);
	glVertex2fv(shopsEast2);
	glVertex2fv(shopsEast3);
	glVertex2fv(shopsEast4);
	glEnd();
}