#include "stdafx.h"
#include "types.h"
#include "Shelby.h"


void drawShelby(void)
{
	drawShelbyWest();
	drawShelbyBridge();
	drawShelbyCentral();
	drawShelbyEast();
	drawShelbyEastExtras();
	drawShelbyWestExtras();
}

void drawShelbyWest(void)
{
	orderedPair shelbyWest1 = { 20.0, 300.0 };
	orderedPair shelbyWest2 = { 35.0, 300.0 };
	orderedPair shelbyWest3 = { 35.0, 340.0 };
	orderedPair shelbyWest4 = { 20.0, 340.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyWest1);
	glVertex2fv(shelbyWest2);
	glVertex2fv(shelbyWest3);
	glVertex2fv(shelbyWest4);
	glEnd();

	orderedPair shelbyWest5 = { 60.0, 350.0 };
	orderedPair shelbyWest6 = { 20.0, 350.0 };
	orderedPair shelbyWest7 = { 20.0, 335.0 };
	orderedPair shelbyWest8 = { 60.0, 335.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyWest5);
	glVertex2fv(shelbyWest6);
	glVertex2fv(shelbyWest7);
	glVertex2fv(shelbyWest8);
	glEnd();
}

void drawShelbyEast(void)
{
	orderedPair shelbyEast1 = { 110.0, 350.0 }; 
	orderedPair shelbyEast2 = { 150.0, 350.0 }; 
	orderedPair shelbyEast3 = { 150.0, 335.0 }; 
	orderedPair shelbyEast4 = { 110.0, 335.0 }; 
	
	glBegin(GL_POLYGON);
	glVertex2fv(shelbyEast1);
	glVertex2fv(shelbyEast2);
	glVertex2fv(shelbyEast3);
	glVertex2fv(shelbyEast4);
	glEnd();

	orderedPair shelbyEast5 = { 150.0, 300.0 };
	orderedPair shelbyEast6 = { 150.0, 340.0 };
	orderedPair shelbyEast7 = { 135.0, 340.0 };
	orderedPair shelbyEast8 = { 135.0, 300.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyEast5);
	glVertex2fv(shelbyEast6);
	glVertex2fv(shelbyEast7);
	glVertex2fv(shelbyEast8);
	glEnd();
}

void drawShelbyBridge(void)
{
	orderedPair shelbyBridge1 = { 60.0, 340.0 };
	orderedPair shelbyBridge2 = { 60.0, 343.0 };
	orderedPair shelbyBridge3 = { 65.0, 343.0 };
	orderedPair shelbyBridge4 = { 65.0, 340.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyBridge1);
	glVertex2fv(shelbyBridge2);
	glVertex2fv(shelbyBridge3);
	glVertex2fv(shelbyBridge4);
	glEnd();

	orderedPair shelbyBridge5 = { 105.0, 340.0 };
	orderedPair shelbyBridge6 = { 105.0, 343.0 };
	orderedPair shelbyBridge7 = { 110.0, 343.0 };
	orderedPair shelbyBridge8 = { 110.0, 340.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyBridge5);
	glVertex2fv(shelbyBridge6);
	glVertex2fv(shelbyBridge7);
	glVertex2fv(shelbyBridge8);
	glEnd();
}

void drawShelbyCentral(void)
{
	orderedPair shelbyCentral1 = { 65.0, 345.0 };
	orderedPair shelbyCentral2 = { 105.0, 345.0 };
	orderedPair shelbyCentral3 = { 105.0, 320.0 };
	orderedPair shelbyCentral4 = { 65.0, 320.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyCentral1);
	glVertex2fv(shelbyCentral2);
	glVertex2fv(shelbyCentral3);
	glVertex2fv(shelbyCentral4);
	glEnd();

	orderedPair shelbyCentral5 = { 70.0, 348.0 };
	orderedPair shelbyCentral6 = { 100.0, 348.0 };
	orderedPair shelbyCentral7 = { 100.0, 317.0 };
	orderedPair shelbyCentral8 = { 70.0, 317.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyCentral5);
	glVertex2fv(shelbyCentral6);
	glVertex2fv(shelbyCentral7);
	glVertex2fv(shelbyCentral8);
	glEnd();

	orderedPair shelbyCentral9 = { 75.0, 350.0 };
	orderedPair shelbyCentral10 = { 95.0, 350.0 };
	orderedPair shelbyCentral11 = { 95.0, 315.0 };
	orderedPair shelbyCentral12 = { 75.0, 315.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyCentral9);
	glVertex2fv(shelbyCentral10);
	glVertex2fv(shelbyCentral11);
	glVertex2fv(shelbyCentral12);
	glEnd();
}

void drawShelbyEastExtras(void)
{
	orderedPair shelbyEastEx1 = { 133.0, 302.0 };
	orderedPair shelbyEastEx2 = { 152.0, 302.0 };
	orderedPair shelbyEastEx3 = { 152.0, 312.0 };
	orderedPair shelbyEastEx4 = { 133.0, 312.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyEastEx1);
	glVertex2fv(shelbyEastEx2);
	glVertex2fv(shelbyEastEx3);
	glVertex2fv(shelbyEastEx4);
	glEnd();

	orderedPair shelbyEastEx5 = { 140.0, 352.0 };
	orderedPair shelbyEastEx6 = { 152.0, 352.0 };
	orderedPair shelbyEastEx7 = { 152.0, 330.0 };
	orderedPair shelbyEastEx8 = { 140.0, 330.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyEastEx5);
	glVertex2fv(shelbyEastEx6);
	glVertex2fv(shelbyEastEx7);
	glVertex2fv(shelbyEastEx8);
	glEnd();

	orderedPair shelbyEastEx9 = { 112.0, 352.0 };
	orderedPair shelbyEastEx10 = { 122.0, 352.0 };
	orderedPair shelbyEastEx11 = { 122.0, 333.0 };
	orderedPair shelbyEastEx12 = { 112.0, 333.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyEastEx9);
	glVertex2fv(shelbyEastEx10);
	glVertex2fv(shelbyEastEx11);
	glVertex2fv(shelbyEastEx12);
	glEnd();
}

void drawShelbyWestExtras(void)
{
	orderedPair shelbyWestEx1 = { 18.0, 302.0 };
	orderedPair shelbyWestEx2 = { 37.0, 302.0 };
	orderedPair shelbyWestEx3 = { 37.0, 312.0 };
	orderedPair shelbyWestEx4 = { 18.0, 312.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyWestEx1);
	glVertex2fv(shelbyWestEx2);
	glVertex2fv(shelbyWestEx3);
	glVertex2fv(shelbyWestEx4);
	glEnd();

	orderedPair shelbyWestEx5 = { 18.0, 352.0 };
	orderedPair shelbyWestEx6 = { 30.0, 352.0 };
	orderedPair shelbyWestEx7 = { 30.0, 330.0 };
	orderedPair shelbyWestEx8 = { 18.0, 330.0 };

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyWestEx5);
	glVertex2fv(shelbyWestEx6);
	glVertex2fv(shelbyWestEx7);
	glVertex2fv(shelbyWestEx8);
	glEnd();

	orderedPair shelbyWestEx9 = { 58.0, 352.0 };
	orderedPair shelbyWestEx10 = { 46.0, 352.0 };
	orderedPair shelbyWestEx11 = { 46.0, 333.0 };
	orderedPair shelbyWestEx12 = { 58.0, 333.0 }; 

	glBegin(GL_POLYGON);
	glVertex2fv(shelbyWestEx9);
	glVertex2fv(shelbyWestEx10);
	glVertex2fv(shelbyWestEx11);
	glVertex2fv(shelbyWestEx12);
	glEnd();
}